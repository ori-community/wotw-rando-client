#pragma once
#include <Modloader/app/structs/SpriteAnimatorAction_PlayMode__Enum.h>
#include <Modloader/app/structs/SpriteAnimatorAction_PlayMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimatorAction_PlayMode__Enum {
        inline app::SpriteAnimatorAction_PlayMode__Enum__Class** type_info() {
            static app::SpriteAnimatorAction_PlayMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteAnimatorAction_PlayMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteAnimatorAction_PlayMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpriteAnimatorAction_PlayMode__Enum__Class>(type_info(), "", "SpriteAnimatorAction", "PlayMode");
        }
        inline app::SpriteAnimatorAction_PlayMode__Enum* create() {
            return il2cpp::create_object<app::SpriteAnimatorAction_PlayMode__Enum>(get_class());
        }
    } // namespace SpriteAnimatorAction_PlayMode__Enum
} // namespace app::classes::types
