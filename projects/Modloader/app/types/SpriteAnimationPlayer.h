#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpriteAnimationPlayer__Class.h>
#include <Modloader/app/structs/SpriteAnimationPlayer.h>

namespace app::classes::types {
    namespace SpriteAnimationPlayer {
        namespace {
            inline app::SpriteAnimationPlayer__Class* type_info_ref = nullptr;
        }
        inline app::SpriteAnimationPlayer__Class** type_info = &type_info_ref;
        inline app::SpriteAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimationPlayer__Class>(type_info, "Moon.Timeline", "SpriteAnimationPlayer");
        }
        inline app::SpriteAnimationPlayer* create() {
            return il2cpp::create_object<app::SpriteAnimationPlayer>(get_class());
        }
    } // namespace SpriteAnimationPlayer
} // namespace app::classes::types
