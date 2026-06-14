#pragma once
#include <Modloader/app/structs/KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings.h>
#include <Modloader/app/structs/KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings {
        inline app::KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Class** type_info() {
            static app::KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Class>(type_info(), "", "KamikazeSootEnemyPlaceholder", "KamikazeSootEnemyPlaceholderSettings");
        }
        inline app::KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings>(get_class());
        }
    } // namespace KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings
} // namespace app::classes::types
