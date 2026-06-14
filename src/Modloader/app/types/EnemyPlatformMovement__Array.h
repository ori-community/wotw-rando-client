#pragma once
#include <Modloader/app/structs/EnemyPlatformMovement__Array.h>
#include <Modloader/app/structs/EnemyPlatformMovement__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyPlatformMovement__Array {
        inline app::EnemyPlatformMovement__Array__Class** type_info() {
            static app::EnemyPlatformMovement__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemyPlatformMovement__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemyPlatformMovement__Array__Class* get_class() {
            return il2cpp::get_class<app::EnemyPlatformMovement__Array__Class>(type_info(), "", "EnemyPlatformMovement[]");
        }
        inline app::EnemyPlatformMovement__Array* create() {
            return il2cpp::create_object<app::EnemyPlatformMovement__Array>(get_class());
        }
    } // namespace EnemyPlatformMovement__Array
} // namespace app::classes::types
