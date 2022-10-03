#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyDoorVisuals {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnemyDoorVisuals__Class** type_info;
        inline app::EnemyDoorVisuals__Class* get_class() {
            return il2cpp::get_class<app::EnemyDoorVisuals__Class>(type_info, "", "EnemyDoorVisuals");
        }
        inline app::EnemyDoorVisuals* create() {
            return il2cpp::create_object<app::EnemyDoorVisuals>(get_class());
        }
    } // namespace EnemyDoorVisuals
} // namespace app::classes::types
