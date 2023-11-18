#pragma once
#include <Modloader/app/structs/KamikazeSootEnemySettings.h>
#include <Modloader/app/structs/KamikazeSootEnemySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemySettings {
        inline app::KamikazeSootEnemySettings__Class** type_info() {
            static app::KamikazeSootEnemySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KamikazeSootEnemySettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KamikazeSootEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemySettings__Class>(type_info(), "", "KamikazeSootEnemySettings");
        }
        inline app::KamikazeSootEnemySettings* create() {
            return il2cpp::create_object<app::KamikazeSootEnemySettings>(get_class());
        }
    } // namespace KamikazeSootEnemySettings
} // namespace app::classes::types
