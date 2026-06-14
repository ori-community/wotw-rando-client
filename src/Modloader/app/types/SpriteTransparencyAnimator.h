#pragma once
#include <Modloader/app/structs/SpriteTransparencyAnimator.h>
#include <Modloader/app/structs/SpriteTransparencyAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteTransparencyAnimator {
        inline app::SpriteTransparencyAnimator__Class** type_info() {
            static app::SpriteTransparencyAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteTransparencyAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteTransparencyAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpriteTransparencyAnimator__Class>(type_info(), "Moon.Timeline", "SpriteTransparencyAnimator");
        }
        inline app::SpriteTransparencyAnimator* create() {
            return il2cpp::create_object<app::SpriteTransparencyAnimator>(get_class());
        }
    } // namespace SpriteTransparencyAnimator
} // namespace app::classes::types
