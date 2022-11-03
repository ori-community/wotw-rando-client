#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnemyEntity_SpawnPopFixState__Enum {
        namespace {
            inline app::EnemyEntity_SpawnPopFixState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EnemyEntity_SpawnPopFixState__Enum__Class** type_info = &type_info_ref;
        inline app::EnemyEntity_SpawnPopFixState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EnemyEntity_SpawnPopFixState__Enum__Class>(type_info, "Moon", "EnemyEntity", "SpawnPopFixState");
        }
        inline app::EnemyEntity_SpawnPopFixState__Enum* create() {
            return il2cpp::create_object<app::EnemyEntity_SpawnPopFixState__Enum>(get_class());
        }
    } // namespace EnemyEntity_SpawnPopFixState__Enum
} // namespace app::classes::types
