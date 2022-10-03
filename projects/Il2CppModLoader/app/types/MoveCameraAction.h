#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveCameraAction {
        namespace {
            app::MoveCameraAction__Class* type_info_ref = nullptr;
        }
        app::MoveCameraAction__Class** type_info = &type_info_ref;
        inline app::MoveCameraAction__Class* get_class() {
            return il2cpp::get_class<app::MoveCameraAction__Class>(type_info, "", "MoveCameraAction");
        }
        inline app::MoveCameraAction* create() {
            return il2cpp::create_object<app::MoveCameraAction>(get_class());
        }
    } // namespace MoveCameraAction
} // namespace app::classes::types
