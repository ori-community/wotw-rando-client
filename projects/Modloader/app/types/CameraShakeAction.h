#pragma once
#include <Modloader/app/structs/CameraShakeAction.h>
#include <Modloader/app/structs/CameraShakeAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraShakeAction {
        inline app::CameraShakeAction__Class** type_info() {
            static app::CameraShakeAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraShakeAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraShakeAction__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeAction__Class>(type_info(), "", "CameraShakeAction");
        }
        inline app::CameraShakeAction* create() {
            return il2cpp::create_object<app::CameraShakeAction>(get_class());
        }
    } // namespace CameraShakeAction
} // namespace app::classes::types
