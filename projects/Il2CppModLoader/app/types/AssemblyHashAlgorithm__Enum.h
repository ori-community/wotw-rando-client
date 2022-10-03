#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssemblyHashAlgorithm__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AssemblyHashAlgorithm__Enum__Class** type_info;
        inline app::AssemblyHashAlgorithm__Enum__Class* get_class() {
            return il2cpp::get_class<app::AssemblyHashAlgorithm__Enum__Class>(type_info, "System.Configuration.Assemblies", "AssemblyHashAlgorithm");
        }
        inline app::AssemblyHashAlgorithm__Enum* create() {
            return il2cpp::create_object<app::AssemblyHashAlgorithm__Enum>(get_class());
        }
    } // namespace AssemblyHashAlgorithm__Enum
} // namespace app::classes::types
