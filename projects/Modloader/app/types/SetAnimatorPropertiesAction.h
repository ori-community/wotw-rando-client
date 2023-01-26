#pragma once
#include <Modloader/app/structs/SetAnimatorPropertiesAction.h>
#include <Modloader/app/structs/SetAnimatorPropertiesAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetAnimatorPropertiesAction {
        inline app::SetAnimatorPropertiesAction__Class** type_info() {
            static app::SetAnimatorPropertiesAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetAnimatorPropertiesAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetAnimatorPropertiesAction__Class* get_class() {
            return il2cpp::get_class<app::SetAnimatorPropertiesAction__Class>(type_info(), "", "SetAnimatorPropertiesAction");
        }
        inline app::SetAnimatorPropertiesAction* create() {
            return il2cpp::create_object<app::SetAnimatorPropertiesAction>(get_class());
        }
    } // namespace SetAnimatorPropertiesAction
} // namespace app::classes::types
