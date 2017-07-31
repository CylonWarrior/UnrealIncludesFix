using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;
using System.Xml;
using System.IO;

namespace VcProjectSerialize
{
    public class ProjectSerializer : IProjSerializer
    {
        private XmlSerializer Serializer;

        public ProjectSerializer()
        {
            Serializer = new XmlSerializer(typeof(Project));
        }


        public Project ReadProjectFile(string filename)
        {
            
            if(!File.Exists(filename))
            {
                return null;
            }
            FileStream file = new FileStream(filename, FileMode.Open);
            Project proj = (Project)Serializer.Deserialize(file);
            file.Close();
            return proj;
        }

        public void WriteProjectFile(Project proj, string filename)
        {
            FileStream outfile = new FileStream(filename, FileMode.Create);
            StreamWriter writer = new StreamWriter(outfile, Encoding.UTF8);
            XmlWriterSettings writerSetting = new XmlWriterSettings();
            writerSetting.Indent = true;
            writerSetting.IndentChars = "\t";
            writerSetting.Encoding = Encoding.UTF8;
            var xmlWriter = XmlWriter.Create(writer, writerSetting);

            var xns = new XmlSerializerNamespaces();
            xns.Add(string.Empty, "http://schemas.microsoft.com/developer/msbuild/2003");
            Serializer.Serialize(xmlWriter, proj, xns);
            outfile.Close();
        }
    }
}
