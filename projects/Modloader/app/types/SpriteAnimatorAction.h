#pragma once
#include <Modloader/app/structs/SpriteAnimatorAction.h>
#include <Modloader/app/structs/SpriteAnimatorAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimatorAction {
        inline app::SpriteAnimatorAction__Class** type_info() {
            static app::SpriteAnimatorAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteAnimatorAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteAnimatorAction__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimatorAction__Class>(type_info(), "", "SpriteAnimatorAction");
        }
        inline app::SpriteAnimatorAction* create() {
            return il2cpp::create_object<app::SpriteAnimatorAction>(get_class());
        }
    } // namespace SpriteAnimatorAction
} // namespace app::classes::types
