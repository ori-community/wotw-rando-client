#pragma once
#include <Modloader/app/structs/SetSpriteAnimatorAction.h>
#include <Modloader/app/structs/SetSpriteAnimatorAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetSpriteAnimatorAction {
        inline app::SetSpriteAnimatorAction__Class** type_info() {
            static app::SetSpriteAnimatorAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetSpriteAnimatorAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetSpriteAnimatorAction__Class* get_class() {
            return il2cpp::get_class<app::SetSpriteAnimatorAction__Class>(type_info(), "", "SetSpriteAnimatorAction");
        }
        inline app::SetSpriteAnimatorAction* create() {
            return il2cpp::create_object<app::SetSpriteAnimatorAction>(get_class());
        }
    } // namespace SetSpriteAnimatorAction
} // namespace app::classes::types
