#pragma once
#include <Modloader/app/structs/SetMecanimTriggerAction.h>
#include <Modloader/app/structs/SetMecanimTriggerAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetMecanimTriggerAction {
        inline app::SetMecanimTriggerAction__Class** type_info() {
            static app::SetMecanimTriggerAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetMecanimTriggerAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetMecanimTriggerAction__Class* get_class() {
            return il2cpp::get_class<app::SetMecanimTriggerAction__Class>(type_info(), "", "SetMecanimTriggerAction");
        }
        inline app::SetMecanimTriggerAction* create() {
            return il2cpp::create_object<app::SetMecanimTriggerAction>(get_class());
        }
    } // namespace SetMecanimTriggerAction
} // namespace app::classes::types
