#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraShakeAction__Class.h>
#include <Modloader/app/structs/CameraShakeAction.h>

namespace app::classes::types {
    namespace CameraShakeAction {
        namespace {
            inline app::CameraShakeAction__Class* type_info_ref = nullptr;
        }
        inline app::CameraShakeAction__Class** type_info = &type_info_ref;
        inline app::CameraShakeAction__Class* get_class() {
            return il2cpp::get_class<app::CameraShakeAction__Class>(type_info, "", "CameraShakeAction");
        }
        inline app::CameraShakeAction* create() {
            return il2cpp::create_object<app::CameraShakeAction>(get_class());
        }
    } // namespace CameraShakeAction
} // namespace app::classes::types
