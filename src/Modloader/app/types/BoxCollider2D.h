#pragma once
#include <Modloader/app/structs/BoxCollider2D.h>
#include <Modloader/app/structs/BoxCollider2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoxCollider2D {
        inline app::BoxCollider2D__Class** type_info() {
            static app::BoxCollider2D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BoxCollider2D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BoxCollider2D__Class* get_class() {
            return il2cpp::get_class<app::BoxCollider2D__Class>(type_info(), "UnityEngine", "BoxCollider2D");
        }
        inline app::BoxCollider2D* create() {
            return il2cpp::create_object<app::BoxCollider2D>(get_class());
        }
    } // namespace BoxCollider2D
} // namespace app::classes::types
