#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssemblyName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AssemblyName__Class** type_info;
        inline app::AssemblyName__Class* get_class() {
            return il2cpp::get_class<app::AssemblyName__Class>(type_info, "System.Reflection", "AssemblyName");
        }
        inline app::AssemblyName* create() {
            return il2cpp::create_object<app::AssemblyName>(get_class());
        }
    } // namespace AssemblyName
} // namespace app::classes::types
