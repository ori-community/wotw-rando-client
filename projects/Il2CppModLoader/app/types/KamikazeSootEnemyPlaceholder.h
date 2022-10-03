#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyPlaceholder {
        namespace {
            app::KamikazeSootEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        app::KamikazeSootEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::KamikazeSootEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyPlaceholder__Class>(type_info, "", "KamikazeSootEnemyPlaceholder");
        }
        inline app::KamikazeSootEnemyPlaceholder* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyPlaceholder>(get_class());
        }
    } // namespace KamikazeSootEnemyPlaceholder
} // namespace app::classes::types
