#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyPlatformMovement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnemyPlatformMovement__Class** type_info;
        inline app::EnemyPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::EnemyPlatformMovement__Class>(type_info, "", "EnemyPlatformMovement");
        }
        inline app::EnemyPlatformMovement* create() {
            return il2cpp::create_object<app::EnemyPlatformMovement>(get_class());
        }
        inline app::EnemyPlatformMovement__Array* create_array(int size) {
            return il2cpp::array_new<app::EnemyPlatformMovement__Array>(get_class(), size);
        }
        inline app::EnemyPlatformMovement__Array* create_array(const std::vector<app::EnemyPlatformMovement*>& items) {
            return il2cpp::array_new<app::EnemyPlatformMovement__Array>(get_class(), items);
        }
    } // namespace EnemyPlatformMovement
} // namespace app::classes::types
