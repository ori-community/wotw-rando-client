#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CompModSwitches {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CompModSwitches__Class** type_info;
        inline app::CompModSwitches__Class* get_class() {
            return il2cpp::get_class<app::CompModSwitches__Class>(type_info, "System.ComponentModel", "CompModSwitches");
        }
        inline app::CompModSwitches* create() {
            return il2cpp::create_object<app::CompModSwitches>(get_class());
        }
    } // namespace CompModSwitches
} // namespace app::classes::types
