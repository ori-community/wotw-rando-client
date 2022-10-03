#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControlSchemeGridController_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ControlSchemeGridController_c__Class** type_info;
        inline app::ControlSchemeGridController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ControlSchemeGridController_c__Class>(type_info, "", "ControlSchemeGridController", "<>c");
        }
        inline app::ControlSchemeGridController_c* create() {
            return il2cpp::create_object<app::ControlSchemeGridController_c>(get_class());
        }
    } // namespace ControlSchemeGridController_c
} // namespace app::classes::types
