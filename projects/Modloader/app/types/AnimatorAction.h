#pragma once
#include <Modloader/app/structs/AnimatorAction.h>
#include <Modloader/app/structs/AnimatorAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimatorAction {
        inline app::AnimatorAction__Class** type_info() {
            static app::AnimatorAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimatorAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimatorAction__Class* get_class() {
            return il2cpp::get_class<app::AnimatorAction__Class>(type_info(), "", "AnimatorAction");
        }
        inline app::AnimatorAction* create() {
            return il2cpp::create_object<app::AnimatorAction>(get_class());
        }
    } // namespace AnimatorAction
} // namespace app::classes::types
