#pragma once
#include <Modloader/app/structs/SetAnimatorSpeedAction.h>
#include <Modloader/app/structs/SetAnimatorSpeedAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetAnimatorSpeedAction {
        inline app::SetAnimatorSpeedAction__Class** type_info() {
            static app::SetAnimatorSpeedAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetAnimatorSpeedAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetAnimatorSpeedAction__Class* get_class() {
            return il2cpp::get_class<app::SetAnimatorSpeedAction__Class>(type_info(), "", "SetAnimatorSpeedAction");
        }
        inline app::SetAnimatorSpeedAction* create() {
            return il2cpp::create_object<app::SetAnimatorSpeedAction>(get_class());
        }
    } // namespace SetAnimatorSpeedAction
} // namespace app::classes::types
