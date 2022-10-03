#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyPlatformMovement__Array {
        namespace {
            app::EnemyPlatformMovement__Array__Class* type_info_ref = nullptr;
        }
        app::EnemyPlatformMovement__Array__Class** type_info = &type_info_ref;
        inline app::EnemyPlatformMovement__Array__Class* get_class() {
            return il2cpp::get_class<app::EnemyPlatformMovement__Array__Class>(type_info, "", "EnemyPlatformMovement[]");
        }
        inline app::EnemyPlatformMovement__Array* create() {
            return il2cpp::create_object<app::EnemyPlatformMovement__Array>(get_class());
        }
    } // namespace EnemyPlatformMovement__Array
} // namespace app::classes::types
