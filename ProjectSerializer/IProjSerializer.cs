using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace VcProjectSerialize
{
    interface IProjSerializer
    {
        Project ReadProjectFile(string filename);


        void WriteProjectFile(Project proj, string filename);


    }
}
