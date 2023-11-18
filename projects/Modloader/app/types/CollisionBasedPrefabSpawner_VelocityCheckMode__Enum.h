#pragma once
#include <Modloader/app/structs/CollisionBasedPrefabSpawner_VelocityCheckMode__Enum.h>
#include <Modloader/app/structs/CollisionBasedPrefabSpawner_VelocityCheckMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollisionBasedPrefabSpawner_VelocityCheckMode__Enum {
        inline app::CollisionBasedPrefabSpawner_VelocityCheckMode__Enum__Class** type_info() {
            static app::CollisionBasedPrefabSpawner_VelocityCheckMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollisionBasedPrefabSpawner_VelocityCheckMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollisionBasedPrefabSpawner_VelocityCheckMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CollisionBasedPrefabSpawner_VelocityCheckMode__Enum__Class>(type_info(), "Moon", "CollisionBasedPrefabSpawner", "VelocityCheckMode");
        }
        inline app::CollisionBasedPrefabSpawner_VelocityCheckMode__Enum* create() {
            return il2cpp::create_object<app::CollisionBasedPrefabSpawner_VelocityCheckMode__Enum>(get_class());
        }
    } // namespace CollisionBasedPrefabSpawner_VelocityCheckMode__Enum
} // namespace app::classes::types
