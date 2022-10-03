#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemySettings {
        namespace {
            app::KamikazeSootEnemySettings__Class* type_info_ref = nullptr;
        }
        app::KamikazeSootEnemySettings__Class** type_info = &type_info_ref;
        inline app::KamikazeSootEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemySettings__Class>(type_info, "", "KamikazeSootEnemySettings");
        }
        inline app::KamikazeSootEnemySettings* create() {
            return il2cpp::create_object<app::KamikazeSootEnemySettings>(get_class());
        }
    } // namespace KamikazeSootEnemySettings
} // namespace app::classes::types
