#pragma once
#include <Modloader/app/structs/SpriteAnimationPlayer_c.h>
#include <Modloader/app/structs/SpriteAnimationPlayer_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimationPlayer_c {
        inline app::SpriteAnimationPlayer_c__Class** type_info() {
            static app::SpriteAnimationPlayer_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpriteAnimationPlayer_c__Class**)(modloader::win::memory::resolve_rva(0x0475AE38));
            }
            return cache;
        }
        inline app::SpriteAnimationPlayer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpriteAnimationPlayer_c__Class>(type_info(), "Moon.Timeline", "SpriteAnimationPlayer", "<>c");
        }
        inline app::SpriteAnimationPlayer_c* create() {
            return il2cpp::create_object<app::SpriteAnimationPlayer_c>(get_class());
        }
    } // namespace SpriteAnimationPlayer_c
} // namespace app::classes::types
