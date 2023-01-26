#pragma once
#include <Modloader/app/structs/KamikazeSootEnemyAnimations.h>
#include <Modloader/app/structs/KamikazeSootEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyAnimations {
        inline app::KamikazeSootEnemyAnimations__Class** type_info() {
            static app::KamikazeSootEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KamikazeSootEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KamikazeSootEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyAnimations__Class>(type_info(), "", "KamikazeSootEnemyAnimations");
        }
        inline app::KamikazeSootEnemyAnimations* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyAnimations>(get_class());
        }
    } // namespace KamikazeSootEnemyAnimations
} // namespace app::classes::types
