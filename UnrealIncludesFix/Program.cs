using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;
using System.Xml;
using System.IO;

namespace UnrealProjectDefucker
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter the name of your project: ");
            var projName = Console.ReadLine();


            XmlSerializer serializer = new XmlSerializer(typeof(UnrealProjectDefucker.Project));

            FileStream file = new FileStream("Intermediate/ProjectFiles/" + projName + ".vcxproj", FileMode.Open);

            UnrealProjectDefucker.Project proj;

            proj = (UnrealProjectDefucker.Project)serializer.Deserialize(file);
            file.Close();

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
            includeDirs = includeDirs.Substring(0, GetIndex(index) + "Engine\\Source\\Runtime\\AudioMixer;".Length);
            var dirList = includeDirs.Split(';');
            List<string> filteredDirList = new List<string>();
            foreach(var dir in dirList)
            {
                if(!(dir.Contains("Intermediate") || dir.Contains("intermediate") || dir == ""))
                {
                    filteredDirList.Add(dir);
                }
            }
            filteredDirList.Sort();
            var joinedFilteredList = String.Join(";", filteredDirList.ToArray());
            //ProjectPropertyGroup[] propertygroup = new ProjectPropertyGroup[proj.PropertyGroup.Length + 1];
            for (int i = 0; i < proj.PropertyGroup.Length; ++i)
            {
                if ("'$(Configuration)|$(Platform)'=='DebugGame_Editor|x64'" == proj.PropertyGroup[i].Condition && proj.PropertyGroup[i].ConfigurationType == null)
                {
                    proj.PropertyGroup[i].IncludePath = includeDirs;
                    Console.WriteLine("Added IncludePath to index {0}", i);
                }
            }
            
            //Create project file: doesnt work
            //FileStream outfile = new FileStream("Intermediate/ProjectFiles/" + projName + ".vcxproj", FileMode.Create);
            //StreamWriter writer = new StreamWriter(outfile, Encoding.UTF8);
            //XmlWriterSettings writerSetting = new XmlWriterSettings();
            //writerSetting.Indent = true;
            //writerSetting.IndentChars = "\t";
            //writerSetting.Encoding = Encoding.UTF8;
            //var xmlWriter = XmlWriter.Create(writer, writerSetting);

            //var xns = new XmlSerializerNamespaces();
            //xns.Add(string.Empty, "http://schemas.microsoft.com/developer/msbuild/2003");
            //serializer.Serialize(xmlWriter, proj, xns);
            //outfile.Close();
            StreamWriter includeFile = new StreamWriter("Intermediate/ProjectFiles/Includes.txt");
            includeFile.Write(includeDirs);
            includeFile.Close();

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



            FileStream outfile = new FileStream("Intermediate/ProjectFiles/UnrealIncludes.props", FileMode.Create);
            StreamWriter writer = new StreamWriter(outfile, Encoding.UTF8);
            XmlWriterSettings writerSetting = new XmlWriterSettings();
            writerSetting.Indent = true;
            writerSetting.IndentChars = "\t";
            writerSetting.Encoding = Encoding.UTF8;
            var xmlWriter = XmlWriter.Create(writer, writerSetting);

            var xns = new XmlSerializerNamespaces();
            xns.Add(string.Empty, "http://schemas.microsoft.com/developer/msbuild/2003");
            serializer.Serialize(xmlWriter, propsProject, xns);
            outfile.Close();

        }

        private static int GetIndex(int index)
        {
            return index;
        }
    }
}
