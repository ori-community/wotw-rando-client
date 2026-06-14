#pragma once
#include <Modloader/app/structs/SetCameraSettingsAction.h>
#include <Modloader/app/structs/SetCameraSettingsAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetCameraSettingsAction {
        inline app::SetCameraSettingsAction__Class** type_info() {
            static app::SetCameraSettingsAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetCameraSettingsAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetCameraSettingsAction__Class* get_class() {
            return il2cpp::get_class<app::SetCameraSettingsAction__Class>(type_info(), "", "SetCameraSettingsAction");
        }
        inline app::SetCameraSettingsAction* create() {
            return il2cpp::create_object<app::SetCameraSettingsAction>(get_class());
        }
    } // namespace SetCameraSettingsAction
} // namespace app::classes::types
