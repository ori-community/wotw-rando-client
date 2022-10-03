#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpriteTransparencyAnimator {
        namespace {
            app::SpriteTransparencyAnimator__Class* type_info_ref = nullptr;
        }
        app::SpriteTransparencyAnimator__Class** type_info = &type_info_ref;
        inline app::SpriteTransparencyAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpriteTransparencyAnimator__Class>(type_info, "Moon.Timeline", "SpriteTransparencyAnimator");
        }
        inline app::SpriteTransparencyAnimator* create() {
            return il2cpp::create_object<app::SpriteTransparencyAnimator>(get_class());
        }
    } // namespace SpriteTransparencyAnimator
} // namespace app::classes::types
