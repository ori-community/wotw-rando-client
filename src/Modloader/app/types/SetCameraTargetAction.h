#pragma once
#include <Modloader/app/structs/SetCameraTargetAction.h>
#include <Modloader/app/structs/SetCameraTargetAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetCameraTargetAction {
        inline app::SetCameraTargetAction__Class** type_info() {
            static app::SetCameraTargetAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetCameraTargetAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetCameraTargetAction__Class* get_class() {
            return il2cpp::get_class<app::SetCameraTargetAction__Class>(type_info(), "", "SetCameraTargetAction");
        }
        inline app::SetCameraTargetAction* create() {
            return il2cpp::create_object<app::SetCameraTargetAction>(get_class());
        }
    } // namespace SetCameraTargetAction
} // namespace app::classes::types
