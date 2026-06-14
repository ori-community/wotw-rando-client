#pragma once
#include <Modloader/app/structs/EnemyZone__Array.h>
#include <Modloader/app/structs/EnemyZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyZone__Array {
        inline app::EnemyZone__Array__Class** type_info() {
            static app::EnemyZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemyZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemyZone__Array__Class* get_class() {
            return il2cpp::get_class<app::EnemyZone__Array__Class>(type_info(), "", "EnemyZone[]");
        }
        inline app::EnemyZone__Array* create() {
            return il2cpp::create_object<app::EnemyZone__Array>(get_class());
        }
    } // namespace EnemyZone__Array
} // namespace app::classes::types
