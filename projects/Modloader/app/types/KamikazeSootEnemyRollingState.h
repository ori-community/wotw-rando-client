#pragma once
#include <Modloader/app/structs/KamikazeSootEnemyRollingState.h>
#include <Modloader/app/structs/KamikazeSootEnemyRollingState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyRollingState {
        inline app::KamikazeSootEnemyRollingState__Class** type_info() {
            static app::KamikazeSootEnemyRollingState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KamikazeSootEnemyRollingState__Class**)(modloader::win::memory::resolve_rva(0x047088B8));
            }
            return cache;
        }
        inline app::KamikazeSootEnemyRollingState__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyRollingState__Class>(type_info(), "", "KamikazeSootEnemyRollingState");
        }
        inline app::KamikazeSootEnemyRollingState* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyRollingState>(get_class());
        }
    } // namespace KamikazeSootEnemyRollingState
} // namespace app::classes::types
