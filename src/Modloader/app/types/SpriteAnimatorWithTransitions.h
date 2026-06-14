#pragma once
#include <Modloader/app/structs/SpriteAnimatorWithTransitions.h>
#include <Modloader/app/structs/SpriteAnimatorWithTransitions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimatorWithTransitions {
        inline app::SpriteAnimatorWithTransitions__Class** type_info() {
            static app::SpriteAnimatorWithTransitions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteAnimatorWithTransitions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteAnimatorWithTransitions__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimatorWithTransitions__Class>(type_info(), "", "SpriteAnimatorWithTransitions");
        }
        inline app::SpriteAnimatorWithTransitions* create() {
            return il2cpp::create_object<app::SpriteAnimatorWithTransitions>(get_class());
        }
    } // namespace SpriteAnimatorWithTransitions
} // namespace app::classes::types
