#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyAlertState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KamikazeSootEnemyAlertState__Class** type_info;
        inline app::KamikazeSootEnemyAlertState__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyAlertState__Class>(type_info, "", "KamikazeSootEnemyAlertState");
        }
        inline app::KamikazeSootEnemyAlertState* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyAlertState>(get_class());
        }
    } // namespace KamikazeSootEnemyAlertState
} // namespace app::classes::types
