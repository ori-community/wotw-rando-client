using System;
namespace RandoMainDLL.Il2Cpp {
  public class Il2CppDecompiler {
    private object syncLock = new object();
    private Il2CppExecutor executor;
    private Metadata metadata;
    private Il2CppData il2Cpp;

    public Il2CppDecompiler(Il2CppExecutor il2CppExecutor) {
      executor = il2CppExecutor;
      metadata = il2CppExecutor.metadata;
      il2Cpp = il2CppExecutor.il2Cpp;
    }

    public ulong GetRVA(string fullName) {
      string[] fullNameParts = fullName.Split('.');
      if (fullNameParts.Length != 3) { return 0; }

      lock (syncLock) {
        for (int imageIndex = 0; imageIndex < metadata.imageDefs.Length; imageIndex++) {
          var imageDef = metadata.imageDefs[imageIndex];
          string imageName = metadata.GetStringFromIndex(imageDef.nameIndex);
          if (imageName.IndexOf(fullNameParts[0], StringComparison.OrdinalIgnoreCase) != 0) { continue; }

          var typeEnd = imageDef.typeStart + imageDef.typeCount;
          for (int typeDefIndex = imageDef.typeStart; typeDefIndex < typeEnd; typeDefIndex++) {
            var typeDef = metadata.typeDefs[typeDefIndex];
            string typeName = executor.GetTypeDefName(typeDef, false, true);
            if (!typeName.Equals(fullNameParts[1], StringComparison.OrdinalIgnoreCase)) { continue; }

            var methodEnd = typeDef.methodStart + typeDef.method_count;
            for (var i = typeDef.methodStart; i < methodEnd; ++i) {
              var methodDef = metadata.methodDefs[i];
              var methodName = metadata.GetStringFromIndex(methodDef.nameIndex);
              if (!methodName.Equals(fullNameParts[2], StringComparison.OrdinalIgnoreCase)) { continue; }

              var methodPointer = il2Cpp.GetMethodPointer(methodDef.methodIndex, i, imageIndex, methodDef.token);
              if (methodPointer > 0) {
                return il2Cpp.GetRVA(methodPointer);
              }
              return 0;
            }
          }
        }
      }
      return 0;
    }
    public int GetFieldOffset(string fullName) {
      string[] fullNameParts = fullName.Split('.');
      if (fullNameParts.Length != 3) { return 0; }

      lock (syncLock) {
        for (int imageIndex = 0; imageIndex < metadata.imageDefs.Length; imageIndex++) {
          var imageDef = metadata.imageDefs[imageIndex];
          string imageName = metadata.GetStringFromIndex(imageDef.nameIndex);
          if (imageName.IndexOf(fullNameParts[0], StringComparison.OrdinalIgnoreCase) != 0) { continue; }

          var typeEnd = imageDef.typeStart + imageDef.typeCount;
          for (int typeDefIndex = imageDef.typeStart; typeDefIndex < typeEnd; typeDefIndex++) {
            var typeDef = metadata.typeDefs[typeDefIndex];
            string typeName = executor.GetTypeDefName(typeDef, false, true);
            if (!typeName.Equals(fullNameParts[1], StringComparison.OrdinalIgnoreCase)) { continue; }

            var fieldEnd = typeDef.fieldStart + typeDef.field_count;
            for (int i = typeDef.fieldStart; i < fieldEnd; ++i) {
              var fieldDef = metadata.fieldDefs[i];
              string fieldName = metadata.GetStringFromIndex(fieldDef.nameIndex);
              if (!fieldName.Equals(fullNameParts[2], StringComparison.OrdinalIgnoreCase)) { continue; }

              return il2Cpp.GetFieldOffsetFromIndex(typeDefIndex, i - typeDef.fieldStart, i, typeDef.IsValueType, false);
            }
          }
        }
      }
      return 0;
    }
  }
}