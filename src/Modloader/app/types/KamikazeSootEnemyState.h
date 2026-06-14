#pragma once
#include <Modloader/app/structs/KamikazeSootEnemyState.h>
#include <Modloader/app/structs/KamikazeSootEnemyState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyState {
        inline app::KamikazeSootEnemyState__Class** type_info() {
            static app::KamikazeSootEnemyState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KamikazeSootEnemyState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KamikazeSootEnemyState__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyState__Class>(type_info(), "", "KamikazeSootEnemyState");
        }
        inline app::KamikazeSootEnemyState* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyState>(get_class());
        }
    } // namespace KamikazeSootEnemyState
} // namespace app::classes::types
