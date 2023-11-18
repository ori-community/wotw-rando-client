#pragma once
#include <Modloader/app/structs/KamikazeSootEnemyRunState.h>
#include <Modloader/app/structs/KamikazeSootEnemyRunState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyRunState {
        inline app::KamikazeSootEnemyRunState__Class** type_info() {
            static app::KamikazeSootEnemyRunState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KamikazeSootEnemyRunState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KamikazeSootEnemyRunState__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyRunState__Class>(type_info(), "", "KamikazeSootEnemyRunState");
        }
        inline app::KamikazeSootEnemyRunState* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyRunState>(get_class());
        }
    } // namespace KamikazeSootEnemyRunState
} // namespace app::classes::types
