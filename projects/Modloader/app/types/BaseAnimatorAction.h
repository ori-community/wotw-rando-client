#pragma once
#include <Modloader/app/structs/BaseAnimatorAction.h>
#include <Modloader/app/structs/BaseAnimatorAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseAnimatorAction {
        inline app::BaseAnimatorAction__Class** type_info() {
            static app::BaseAnimatorAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseAnimatorAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseAnimatorAction__Class* get_class() {
            return il2cpp::get_class<app::BaseAnimatorAction__Class>(type_info(), "", "BaseAnimatorAction");
        }
        inline app::BaseAnimatorAction* create() {
            return il2cpp::create_object<app::BaseAnimatorAction>(get_class());
        }
    } // namespace BaseAnimatorAction
} // namespace app::classes::types
