#pragma once
#include <Modloader/app/structs/SpriteAnimator__Array.h>
#include <Modloader/app/structs/SpriteAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimator__Array {
        inline app::SpriteAnimator__Array__Class** type_info() {
            static app::SpriteAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteAnimator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimator__Array__Class>(type_info(), "", "SpriteAnimator[]");
        }
        inline app::SpriteAnimator__Array* create() {
            return il2cpp::create_object<app::SpriteAnimator__Array>(get_class());
        }
    } // namespace SpriteAnimator__Array
} // namespace app::classes::types
