#pragma once
#include <Modloader/app/structs/SpriteAnimationPlayer.h>
#include <Modloader/app/structs/SpriteAnimationPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimationPlayer {
        inline app::SpriteAnimationPlayer__Class** type_info() {
            static app::SpriteAnimationPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteAnimationPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimationPlayer__Class>(type_info(), "Moon.Timeline", "SpriteAnimationPlayer");
        }
        inline app::SpriteAnimationPlayer* create() {
            return il2cpp::create_object<app::SpriteAnimationPlayer>(get_class());
        }
    } // namespace SpriteAnimationPlayer
} // namespace app::classes::types
