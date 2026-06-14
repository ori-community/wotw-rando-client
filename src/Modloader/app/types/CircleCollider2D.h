#pragma once
#include <Modloader/app/structs/CircleCollider2D.h>
#include <Modloader/app/structs/CircleCollider2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CircleCollider2D {
        inline app::CircleCollider2D__Class** type_info() {
            static app::CircleCollider2D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CircleCollider2D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CircleCollider2D__Class* get_class() {
            return il2cpp::get_class<app::CircleCollider2D__Class>(type_info(), "UnityEngine", "CircleCollider2D");
        }
        inline app::CircleCollider2D* create() {
            return il2cpp::create_object<app::CircleCollider2D>(get_class());
        }
    } // namespace CircleCollider2D
} // namespace app::classes::types
