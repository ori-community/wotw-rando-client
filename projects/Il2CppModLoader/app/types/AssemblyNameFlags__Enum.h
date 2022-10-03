#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssemblyNameFlags__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AssemblyNameFlags__Enum__Class** type_info;
        inline app::AssemblyNameFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::AssemblyNameFlags__Enum__Class>(type_info, "System.Reflection", "AssemblyNameFlags");
        }
        inline app::AssemblyNameFlags__Enum* create() {
            return il2cpp::create_object<app::AssemblyNameFlags__Enum>(get_class());
        }
    } // namespace AssemblyNameFlags__Enum
} // namespace app::classes::types
