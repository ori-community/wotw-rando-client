#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssemblyVersionCompatibility__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AssemblyVersionCompatibility__Enum__Class** type_info;
        inline app::AssemblyVersionCompatibility__Enum__Class* get_class() {
            return il2cpp::get_class<app::AssemblyVersionCompatibility__Enum__Class>(type_info, "System.Configuration.Assemblies", "AssemblyVersionCompatibility");
        }
        inline app::AssemblyVersionCompatibility__Enum* create() {
            return il2cpp::create_object<app::AssemblyVersionCompatibility__Enum>(get_class());
        }
    } // namespace AssemblyVersionCompatibility__Enum
} // namespace app::classes::types
