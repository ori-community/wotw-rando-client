#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyRunState {
        namespace {
            app::KamikazeSootEnemyRunState__Class* type_info_ref = nullptr;
        }
        app::KamikazeSootEnemyRunState__Class** type_info = &type_info_ref;
        inline app::KamikazeSootEnemyRunState__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyRunState__Class>(type_info, "", "KamikazeSootEnemyRunState");
        }
        inline app::KamikazeSootEnemyRunState* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyRunState>(get_class());
        }
    } // namespace KamikazeSootEnemyRunState
} // namespace app::classes::types
