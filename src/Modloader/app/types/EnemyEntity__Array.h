#pragma once
#include <Modloader/app/structs/EnemyEntity__Array.h>
#include <Modloader/app/structs/EnemyEntity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyEntity__Array {
        inline app::EnemyEntity__Array__Class** type_info() {
            static app::EnemyEntity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemyEntity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemyEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::EnemyEntity__Array__Class>(type_info(), "Moon", "EnemyEntity[]");
        }
        inline app::EnemyEntity__Array* create() {
            return il2cpp::create_object<app::EnemyEntity__Array>(get_class());
        }
    } // namespace EnemyEntity__Array
} // namespace app::classes::types
