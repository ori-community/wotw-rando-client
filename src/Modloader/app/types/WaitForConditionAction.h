#pragma once
#include <Modloader/app/structs/WaitForConditionAction.h>
#include <Modloader/app/structs/WaitForConditionAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitForConditionAction {
        inline app::WaitForConditionAction__Class** type_info() {
            static app::WaitForConditionAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitForConditionAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitForConditionAction__Class* get_class() {
            return il2cpp::get_class<app::WaitForConditionAction__Class>(type_info(), "", "WaitForConditionAction");
        }
        inline app::WaitForConditionAction* create() {
            return il2cpp::create_object<app::WaitForConditionAction>(get_class());
        }
    } // namespace WaitForConditionAction
} // namespace app::classes::types
