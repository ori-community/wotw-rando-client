#pragma once
#include <Modloader/app/structs/SetBooleanAction.h>
#include <Modloader/app/structs/SetBooleanAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetBooleanAction {
        inline app::SetBooleanAction__Class** type_info() {
            static app::SetBooleanAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetBooleanAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetBooleanAction__Class* get_class() {
            return il2cpp::get_class<app::SetBooleanAction__Class>(type_info(), "Moon.BehaviourSystem", "SetBooleanAction");
        }
        inline app::SetBooleanAction* create() {
            return il2cpp::create_object<app::SetBooleanAction>(get_class());
        }
    } // namespace SetBooleanAction
} // namespace app::classes::types
