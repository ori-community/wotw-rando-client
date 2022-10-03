#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimator_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpriteAnimator_c__Class** type_info;
        inline app::SpriteAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpriteAnimator_c__Class>(type_info, "", "SpriteAnimator", "<>c");
        }
        inline app::SpriteAnimator_c* create() {
            return il2cpp::create_object<app::SpriteAnimator_c>(get_class());
        }
    } // namespace SpriteAnimator_c
} // namespace app::classes::types
