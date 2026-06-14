#pragma once
#include <Modloader/app/structs/EnemyEntity_SpawnPopFixState__Enum.h>
#include <Modloader/app/structs/EnemyEntity_SpawnPopFixState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyEntity_SpawnPopFixState__Enum {
        inline app::EnemyEntity_SpawnPopFixState__Enum__Class** type_info() {
            static app::EnemyEntity_SpawnPopFixState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemyEntity_SpawnPopFixState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemyEntity_SpawnPopFixState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyEntity_SpawnPopFixState__Enum__Class>(type_info(), "Moon", "EnemyEntity", "SpawnPopFixState");
        }
        inline app::EnemyEntity_SpawnPopFixState__Enum* create() {
            return il2cpp::create_object<app::EnemyEntity_SpawnPopFixState__Enum>(get_class());
        }
    } // namespace EnemyEntity_SpawnPopFixState__Enum
} // namespace app::classes::types
