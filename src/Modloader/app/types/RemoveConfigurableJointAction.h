#pragma once
#include <Modloader/app/structs/RemoveConfigurableJointAction.h>
#include <Modloader/app/structs/RemoveConfigurableJointAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveConfigurableJointAction {
        inline app::RemoveConfigurableJointAction__Class** type_info() {
            static app::RemoveConfigurableJointAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoveConfigurableJointAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoveConfigurableJointAction__Class* get_class() {
            return il2cpp::get_class<app::RemoveConfigurableJointAction__Class>(type_info(), "", "RemoveConfigurableJointAction");
        }
        inline app::RemoveConfigurableJointAction* create() {
            return il2cpp::create_object<app::RemoveConfigurableJointAction>(get_class());
        }
    } // namespace RemoveConfigurableJointAction
} // namespace app::classes::types
