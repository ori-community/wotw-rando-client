#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssemblyBridge {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AssemblyBridge__Class** type_info;
        inline app::AssemblyBridge__Class* get_class() {
            return il2cpp::get_class<app::AssemblyBridge__Class>(type_info, "", "AssemblyBridge");
        }
        inline app::AssemblyBridge* create() {
            return il2cpp::create_object<app::AssemblyBridge>(get_class());
        }
    } // namespace AssemblyBridge
} // namespace app::classes::types
