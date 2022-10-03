#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollisionDetectionMode2D__Enum {
        namespace {
            app::CollisionDetectionMode2D__Enum__Class* type_info_ref = nullptr;
        }
        app::CollisionDetectionMode2D__Enum__Class** type_info = &type_info_ref;
        inline app::CollisionDetectionMode2D__Enum__Class* get_class() {
            return il2cpp::get_class<app::CollisionDetectionMode2D__Enum__Class>(type_info, "UnityEngine", "CollisionDetectionMode2D");
        }
        inline app::CollisionDetectionMode2D__Enum* create() {
            return il2cpp::create_object<app::CollisionDetectionMode2D__Enum>(get_class());
        }
    } // namespace CollisionDetectionMode2D__Enum
} // namespace app::classes::types
