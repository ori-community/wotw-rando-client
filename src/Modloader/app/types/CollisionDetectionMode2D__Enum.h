#pragma once
#include <Modloader/app/structs/CollisionDetectionMode2D__Enum.h>
#include <Modloader/app/structs/CollisionDetectionMode2D__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollisionDetectionMode2D__Enum {
        inline app::CollisionDetectionMode2D__Enum__Class** type_info() {
            static app::CollisionDetectionMode2D__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollisionDetectionMode2D__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollisionDetectionMode2D__Enum__Class* get_class() {
            return il2cpp::get_class<app::CollisionDetectionMode2D__Enum__Class>(type_info(), "UnityEngine", "CollisionDetectionMode2D");
        }
        inline app::CollisionDetectionMode2D__Enum* create() {
            return il2cpp::create_object<app::CollisionDetectionMode2D__Enum>(get_class());
        }
    } // namespace CollisionDetectionMode2D__Enum
} // namespace app::classes::types
