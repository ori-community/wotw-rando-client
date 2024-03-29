#pragma once
#include <Modloader/app/structs/KamikazeSootEnemyAlertState.h>
#include <Modloader/app/structs/KamikazeSootEnemyAlertState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyAlertState {
        inline app::KamikazeSootEnemyAlertState__Class** type_info() {
            static app::KamikazeSootEnemyAlertState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KamikazeSootEnemyAlertState__Class**)(modloader::win::memory::resolve_rva(0x04796D80));
            }
            return cache;
        }
        inline app::KamikazeSootEnemyAlertState__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyAlertState__Class>(type_info(), "", "KamikazeSootEnemyAlertState");
        }
        inline app::KamikazeSootEnemyAlertState* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyAlertState>(get_class());
        }
    } // namespace KamikazeSootEnemyAlertState
} // namespace app::classes::types
