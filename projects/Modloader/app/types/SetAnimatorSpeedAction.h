#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetAnimatorSpeedAction__Class.h>
#include <Modloader/app/structs/SetAnimatorSpeedAction.h>

namespace app::classes::types {
    namespace SetAnimatorSpeedAction {
        namespace {
            inline app::SetAnimatorSpeedAction__Class* type_info_ref = nullptr;
        }
        inline app::SetAnimatorSpeedAction__Class** type_info = &type_info_ref;
        inline app::SetAnimatorSpeedAction__Class* get_class() {
            return il2cpp::get_class<app::SetAnimatorSpeedAction__Class>(type_info, "", "SetAnimatorSpeedAction");
        }
        inline app::SetAnimatorSpeedAction* create() {
            return il2cpp::create_object<app::SetAnimatorSpeedAction>(get_class());
        }
    } // namespace SetAnimatorSpeedAction
} // namespace app::classes::types
