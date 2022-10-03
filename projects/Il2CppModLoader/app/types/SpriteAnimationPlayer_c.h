#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimationPlayer_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpriteAnimationPlayer_c__Class** type_info;
        inline app::SpriteAnimationPlayer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpriteAnimationPlayer_c__Class>(type_info, "Moon.Timeline", "SpriteAnimationPlayer", "<>c");
        }
        inline app::SpriteAnimationPlayer_c* create() {
            return il2cpp::create_object<app::SpriteAnimationPlayer_c>(get_class());
        }
    } // namespace SpriteAnimationPlayer_c
} // namespace app::classes::types
