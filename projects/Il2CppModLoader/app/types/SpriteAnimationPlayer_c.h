#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpriteAnimationPlayer_c {
        inline app::SpriteAnimationPlayer_c__Class** type_info = (app::SpriteAnimationPlayer_c__Class**)(modloader::win::memory::resolve_rva(0x0475AE38));
        inline app::SpriteAnimationPlayer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpriteAnimationPlayer_c__Class>(type_info, "Moon.Timeline", "SpriteAnimationPlayer", "<>c");
        }
        inline app::SpriteAnimationPlayer_c* create() {
            return il2cpp::create_object<app::SpriteAnimationPlayer_c>(get_class());
        }
    } // namespace SpriteAnimationPlayer_c
} // namespace app::classes::types
