#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings {
        namespace {
            inline app::KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Class* type_info_ref = nullptr;
        }
        inline app::KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Class** type_info = &type_info_ref;
        inline app::KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings__Class>(type_info, "", "KamikazeSootEnemyPlaceholder", "KamikazeSootEnemyPlaceholderSettings");
        }
        inline app::KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings>(get_class());
        }
    } // namespace KamikazeSootEnemyPlaceholder_KamikazeSootEnemyPlaceholderSettings
} // namespace app::classes::types
