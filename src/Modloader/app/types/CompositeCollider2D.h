#pragma once
#include <Modloader/app/structs/CompositeCollider2D.h>
#include <Modloader/app/structs/CompositeCollider2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompositeCollider2D {
        inline app::CompositeCollider2D__Class** type_info() {
            static app::CompositeCollider2D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompositeCollider2D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompositeCollider2D__Class* get_class() {
            return il2cpp::get_class<app::CompositeCollider2D__Class>(type_info(), "UnityEngine", "CompositeCollider2D");
        }
        inline app::CompositeCollider2D* create() {
            return il2cpp::create_object<app::CompositeCollider2D>(get_class());
        }
    } // namespace CompositeCollider2D
} // namespace app::classes::types
