#pragma once
#include <Modloader/app/structs/SpriteAnimator.h>
#include <Modloader/app/structs/SpriteAnimator__Array.h>
#include <Modloader/app/structs/SpriteAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimator {
        inline app::SpriteAnimator__Class** type_info() {
            static app::SpriteAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimator__Class>(type_info(), "", "SpriteAnimator");
        }
        inline app::SpriteAnimator* create() {
            return il2cpp::create_object<app::SpriteAnimator>(get_class());
        }
        inline app::SpriteAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::SpriteAnimator__Array>(get_class(), size);
        }
        inline app::SpriteAnimator__Array* create_array(const std::vector<app::SpriteAnimator*>& items) {
            return il2cpp::array_new<app::SpriteAnimator__Array>(get_class(), items);
        }
    } // namespace SpriteAnimator
} // namespace app::classes::types
