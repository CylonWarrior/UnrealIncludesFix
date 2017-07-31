using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace UnrealIncludesFixer
{
    interface IUnrealProjectManipulator
    {
        string ReadNMakeIncludes(VcProjectSerialize.Project proj);
        string FilterOutIntermediateFolders(string includeDirs);

        void AddIncludesToUnrealProject(ref VcProjectSerialize.Project proj, string includeDirs); 
        VcProjectSerialize.Project CreatePropsProject(string includeDirs);
    }
}
