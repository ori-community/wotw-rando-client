#pragma once
#include <Modloader/app/structs/SetSpriteAnimator.h>
#include <Modloader/app/structs/SetSpriteAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetSpriteAnimator {
        inline app::SetSpriteAnimator__Class** type_info() {
            static app::SetSpriteAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetSpriteAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetSpriteAnimator__Class* get_class() {
            return il2cpp::get_class<app::SetSpriteAnimator__Class>(type_info(), "", "SetSpriteAnimator");
        }
        inline app::SetSpriteAnimator* create() {
            return il2cpp::create_object<app::SetSpriteAnimator>(get_class());
        }
    } // namespace SetSpriteAnimator
} // namespace app::classes::types
