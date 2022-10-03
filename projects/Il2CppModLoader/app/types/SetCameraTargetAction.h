#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetCameraTargetAction {
        namespace {
            app::SetCameraTargetAction__Class* type_info_ref = nullptr;
        }
        app::SetCameraTargetAction__Class** type_info = &type_info_ref;
        inline app::SetCameraTargetAction__Class* get_class() {
            return il2cpp::get_class<app::SetCameraTargetAction__Class>(type_info, "", "SetCameraTargetAction");
        }
        inline app::SetCameraTargetAction* create() {
            return il2cpp::create_object<app::SetCameraTargetAction>(get_class());
        }
    } // namespace SetCameraTargetAction
} // namespace app::classes::types
