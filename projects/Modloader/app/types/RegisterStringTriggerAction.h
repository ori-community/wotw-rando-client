#pragma once
#include <Modloader/app/structs/RegisterStringTriggerAction.h>
#include <Modloader/app/structs/RegisterStringTriggerAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegisterStringTriggerAction {
        inline app::RegisterStringTriggerAction__Class** type_info() {
            static app::RegisterStringTriggerAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RegisterStringTriggerAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RegisterStringTriggerAction__Class* get_class() {
            return il2cpp::get_class<app::RegisterStringTriggerAction__Class>(type_info(), "", "RegisterStringTriggerAction");
        }
        inline app::RegisterStringTriggerAction* create() {
            return il2cpp::create_object<app::RegisterStringTriggerAction>(get_class());
        }
    } // namespace RegisterStringTriggerAction
} // namespace app::classes::types
