using System;
using System.IO;
using System.Linq;
namespace RandoMainDLL.Il2Cpp {
    public static class Il2CppReader {
        public static bool Init(byte[] il2cppBytes, byte[] metadataBytes, out Metadata metadata, out Il2CppData il2Cpp) {
            var sanity = BitConverter.ToUInt32(metadataBytes, 0);
            if (sanity != 0xFAB11BAF) {
                throw new Exception("ERROR: Metadata file supplied is not valid metadata file.");
            }
            metadata = new Metadata(new MemoryStream(metadataBytes));

            var il2cppMagic = BitConverter.ToUInt32(il2cppBytes, 0);
            var version = metadata.Version;
            var il2CppMemory = new MemoryStream(il2cppBytes);
            il2Cpp = new PE(il2CppMemory, version, metadata.maxMetadataUsages);
            var flag = il2Cpp.PlusSearch(metadata.methodDefs.Count(x => x.methodIndex >= 0), metadata.typeDefs.Length);
            if (!flag) {
                flag = il2Cpp.Search();
            }
            if (!flag) {
                flag = il2Cpp.SymbolSearch();
            }
            return flag;
        }
    }
}
