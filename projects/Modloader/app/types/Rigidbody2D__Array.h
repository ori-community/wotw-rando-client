#pragma once
#include <Modloader/app/structs/Rigidbody2D__Array.h>
#include <Modloader/app/structs/Rigidbody2D__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Rigidbody2D__Array {
        inline app::Rigidbody2D__Array__Class** type_info() {
            static app::Rigidbody2D__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Rigidbody2D__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Rigidbody2D__Array__Class* get_class() {
            return il2cpp::get_class<app::Rigidbody2D__Array__Class>(type_info(), "UnityEngine", "Rigidbody2D[]");
        }
        inline app::Rigidbody2D__Array* create() {
            return il2cpp::create_object<app::Rigidbody2D__Array>(get_class());
        }
    } // namespace Rigidbody2D__Array
} // namespace app::classes::types
