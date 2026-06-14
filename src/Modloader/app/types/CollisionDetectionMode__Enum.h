#pragma once
#include <Modloader/app/structs/CollisionDetectionMode__Enum.h>
#include <Modloader/app/structs/CollisionDetectionMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollisionDetectionMode__Enum {
        inline app::CollisionDetectionMode__Enum__Class** type_info() {
            static app::CollisionDetectionMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollisionDetectionMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollisionDetectionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CollisionDetectionMode__Enum__Class>(type_info(), "UnityEngine", "CollisionDetectionMode");
        }
        inline app::CollisionDetectionMode__Enum* create() {
            return il2cpp::create_object<app::CollisionDetectionMode__Enum>(get_class());
        }
    } // namespace CollisionDetectionMode__Enum
} // namespace app::classes::types
