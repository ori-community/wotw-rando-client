#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyRollingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KamikazeSootEnemyRollingState__Class** type_info;
        inline app::KamikazeSootEnemyRollingState__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyRollingState__Class>(type_info, "", "KamikazeSootEnemyRollingState");
        }
        inline app::KamikazeSootEnemyRollingState* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyRollingState>(get_class());
        }
    } // namespace KamikazeSootEnemyRollingState
} // namespace app::classes::types
