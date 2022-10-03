#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyDropState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KamikazeSootEnemyDropState__Class** type_info;
        inline app::KamikazeSootEnemyDropState__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyDropState__Class>(type_info, "", "KamikazeSootEnemyDropState");
        }
        inline app::KamikazeSootEnemyDropState* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyDropState>(get_class());
        }
    } // namespace KamikazeSootEnemyDropState
} // namespace app::classes::types
