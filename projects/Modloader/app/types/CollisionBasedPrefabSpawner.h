#pragma once
#include <Modloader/app/structs/CollisionBasedPrefabSpawner.h>
#include <Modloader/app/structs/CollisionBasedPrefabSpawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollisionBasedPrefabSpawner {
        inline app::CollisionBasedPrefabSpawner__Class** type_info() {
            static app::CollisionBasedPrefabSpawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollisionBasedPrefabSpawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollisionBasedPrefabSpawner__Class* get_class() {
            return il2cpp::get_class<app::CollisionBasedPrefabSpawner__Class>(type_info(), "Moon", "CollisionBasedPrefabSpawner");
        }
        inline app::CollisionBasedPrefabSpawner* create() {
            return il2cpp::create_object<app::CollisionBasedPrefabSpawner>(get_class());
        }
    } // namespace CollisionBasedPrefabSpawner
} // namespace app::classes::types
