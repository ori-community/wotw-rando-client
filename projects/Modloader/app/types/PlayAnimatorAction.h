#pragma once
#include <Modloader/app/structs/PlayAnimatorAction.h>
#include <Modloader/app/structs/PlayAnimatorAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayAnimatorAction {
        inline app::PlayAnimatorAction__Class** type_info() {
            static app::PlayAnimatorAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayAnimatorAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayAnimatorAction__Class* get_class() {
            return il2cpp::get_class<app::PlayAnimatorAction__Class>(type_info(), "", "PlayAnimatorAction");
        }
        inline app::PlayAnimatorAction* create() {
            return il2cpp::create_object<app::PlayAnimatorAction>(get_class());
        }
    } // namespace PlayAnimatorAction
} // namespace app::classes::types
