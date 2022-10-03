#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyState {
        namespace {
            app::KamikazeSootEnemyState__Class* type_info_ref = nullptr;
        }
        app::KamikazeSootEnemyState__Class** type_info = &type_info_ref;
        inline app::KamikazeSootEnemyState__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyState__Class>(type_info, "", "KamikazeSootEnemyState");
        }
        inline app::KamikazeSootEnemyState* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyState>(get_class());
        }
    } // namespace KamikazeSootEnemyState
} // namespace app::classes::types
