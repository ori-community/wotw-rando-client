#pragma once
#include <Modloader/app/structs/SpriteTransparencyTweenAnimator.h>
#include <Modloader/app/structs/SpriteTransparencyTweenAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteTransparencyTweenAnimator {
        inline app::SpriteTransparencyTweenAnimator__Class** type_info() {
            static app::SpriteTransparencyTweenAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteTransparencyTweenAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteTransparencyTweenAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpriteTransparencyTweenAnimator__Class>(type_info(), "Moon.Timeline", "SpriteTransparencyTweenAnimator");
        }
        inline app::SpriteTransparencyTweenAnimator* create() {
            return il2cpp::create_object<app::SpriteTransparencyTweenAnimator>(get_class());
        }
    } // namespace SpriteTransparencyTweenAnimator
} // namespace app::classes::types
