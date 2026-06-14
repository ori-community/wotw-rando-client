#pragma once
#include <Modloader/app/structs/KamikazeSootEnemyPlaceholder.h>
#include <Modloader/app/structs/KamikazeSootEnemyPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyPlaceholder {
        inline app::KamikazeSootEnemyPlaceholder__Class** type_info() {
            static app::KamikazeSootEnemyPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KamikazeSootEnemyPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KamikazeSootEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyPlaceholder__Class>(type_info(), "", "KamikazeSootEnemyPlaceholder");
        }
        inline app::KamikazeSootEnemyPlaceholder* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyPlaceholder>(get_class());
        }
    } // namespace KamikazeSootEnemyPlaceholder
} // namespace app::classes::types
