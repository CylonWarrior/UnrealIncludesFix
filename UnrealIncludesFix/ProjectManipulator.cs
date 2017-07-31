using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using VcProjectSerialize;

namespace UnrealIncludesFixer
{
    public class ProjectManipulator : IUnrealProjectManipulator
    {
        public void AddIncludesToUnrealProject(ref Project proj, string includeDirs)
        {
            for (int i = 0; i < proj.PropertyGroup.Length; ++i)
            {
                if ("'$(Configuration)|$(Platform)'=='DebugGame_Editor|x64'" == proj.PropertyGroup[i].Condition && proj.PropertyGroup[i].ConfigurationType == null)
                {
                    proj.PropertyGroup[i].IncludePath = includeDirs;
                }
            }
        }

        public Project CreatePropsProject(string includeDirs)
        {
            Project propsProject = new Project();
            propsProject.ToolsVersion = "4.0";
            propsProject.ImportGroup = new ProjectImportGroup[1];
            propsProject.ImportGroup[0] = new ProjectImportGroup();
            propsProject.ImportGroup[0].Label = "PropertySheets";
            propsProject.PropertyGroup = new ProjectPropertyGroup[2];
            propsProject.PropertyGroup[0] = new ProjectPropertyGroup();
            propsProject.PropertyGroup[1] = new ProjectPropertyGroup();
            propsProject.PropertyGroup[0].Label = "UserMacros";
            propsProject.PropertyGroup[1].IncludePath = includeDirs;
            propsProject.ItemDefinitionGroup = "";
            propsProject.ItemGroup = new ProjectItemGroup[1];
            propsProject.ItemGroup[0] = new ProjectItemGroup();

            return propsProject;
        }

        public string FilterOutIntermediateFolders(string includeDirs)
        {
            var dirList = includeDirs.Split(';');
            List<string> filteredDirList = new List<string>();
            foreach (var dir in dirList)
            {

                if (!(dir.Contains("Intermediate") || dir.Contains("intermediate") || dir == ""))
                {
                    filteredDirList.Add(dir);
                }
            }
            filteredDirList.Sort();
            var joinedFilteredList = String.Join(";", filteredDirList.ToArray());

            return joinedFilteredList;
        }

        public string ReadNMakeIncludes(Project proj)
        {
            string includeDirs = "";
            foreach (var property in proj.PropertyGroup)
            {
                if (property.NMakeIncludeSearchPath != null)
                {
                    includeDirs = property.NMakeIncludeSearchPath;
                    break;
                }
            }
            includeDirs = includeDirs.Replace("$(NMakeIncludeSearchPath);", "");

            var index = includeDirs.LastIndexOf("Engine\\Source\\Runtime\\AudioMixer;");
            includeDirs = includeDirs.Substring(0, index + "Engine\\Source\\Runtime\\AudioMixer;".Length);

            return includeDirs;
        }
    }

}
