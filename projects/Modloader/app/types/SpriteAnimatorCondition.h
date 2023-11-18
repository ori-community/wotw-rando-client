#pragma once
#include <Modloader/app/structs/SpriteAnimatorCondition.h>
#include <Modloader/app/structs/SpriteAnimatorCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimatorCondition {
        inline app::SpriteAnimatorCondition__Class** type_info() {
            static app::SpriteAnimatorCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteAnimatorCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteAnimatorCondition__Class* get_class() {
            return il2cpp::get_class<app::SpriteAnimatorCondition__Class>(type_info(), "", "SpriteAnimatorCondition");
        }
        inline app::SpriteAnimatorCondition* create() {
            return il2cpp::create_object<app::SpriteAnimatorCondition>(get_class());
        }
    } // namespace SpriteAnimatorCondition
} // namespace app::classes::types
