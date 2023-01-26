#pragma once
#include <Modloader/app/structs/Collider2D__Array.h>
#include <Modloader/app/structs/Collider2D__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Collider2D__Array {
        inline app::Collider2D__Array__Class** type_info() {
            static app::Collider2D__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Collider2D__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Collider2D__Array__Class* get_class() {
            return il2cpp::get_class<app::Collider2D__Array__Class>(type_info(), "UnityEngine", "Collider2D[]");
        }
        inline app::Collider2D__Array* create() {
            return il2cpp::create_object<app::Collider2D__Array>(get_class());
        }
    } // namespace Collider2D__Array
} // namespace app::classes::types
