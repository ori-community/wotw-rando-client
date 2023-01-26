#pragma once
#include <Modloader/app/structs/EnemyNoGoZone__Array.h>
#include <Modloader/app/structs/EnemyNoGoZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyNoGoZone__Array {
        inline app::EnemyNoGoZone__Array__Class** type_info() {
            static app::EnemyNoGoZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemyNoGoZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemyNoGoZone__Array__Class* get_class() {
            return il2cpp::get_class<app::EnemyNoGoZone__Array__Class>(type_info(), "", "EnemyNoGoZone[]");
        }
        inline app::EnemyNoGoZone__Array* create() {
            return il2cpp::create_object<app::EnemyNoGoZone__Array>(get_class());
        }
    } // namespace EnemyNoGoZone__Array
} // namespace app::classes::types
