#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControlSchemeGridController {
        namespace {
            app::ControlSchemeGridController__Class* type_info_ref = nullptr;
        }
        app::ControlSchemeGridController__Class** type_info = &type_info_ref;
        inline app::ControlSchemeGridController__Class* get_class() {
            return il2cpp::get_class<app::ControlSchemeGridController__Class>(type_info, "", "ControlSchemeGridController");
        }
        inline app::ControlSchemeGridController* create() {
            return il2cpp::create_object<app::ControlSchemeGridController>(get_class());
        }
    } // namespace ControlSchemeGridController
} // namespace app::classes::types
