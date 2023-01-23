#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetCameraTargetAction__Class.h>
#include <Modloader/app/structs/SetCameraTargetAction.h>

namespace app::classes::types {
    namespace SetCameraTargetAction {
        namespace {
            inline app::SetCameraTargetAction__Class* type_info_ref = nullptr;
        }
        inline app::SetCameraTargetAction__Class** type_info = &type_info_ref;
        inline app::SetCameraTargetAction__Class* get_class() {
            return il2cpp::get_class<app::SetCameraTargetAction__Class>(type_info, "", "SetCameraTargetAction");
        }
        inline app::SetCameraTargetAction* create() {
            return il2cpp::create_object<app::SetCameraTargetAction>(get_class());
        }
    } // namespace SetCameraTargetAction
} // namespace app::classes::types
