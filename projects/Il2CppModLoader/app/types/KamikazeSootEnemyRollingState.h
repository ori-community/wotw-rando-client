#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyRollingState {
        inline app::KamikazeSootEnemyRollingState__Class** type_info = (app::KamikazeSootEnemyRollingState__Class**)(modloader::win::memory::resolve_rva(0x047088B8));
        inline app::KamikazeSootEnemyRollingState__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyRollingState__Class>(type_info, "", "KamikazeSootEnemyRollingState");
        }
        inline app::KamikazeSootEnemyRollingState* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyRollingState>(get_class());
        }
    } // namespace KamikazeSootEnemyRollingState
} // namespace app::classes::types
