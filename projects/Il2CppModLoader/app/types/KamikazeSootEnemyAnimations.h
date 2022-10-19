#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KamikazeSootEnemyAnimations {
        namespace {
            inline app::KamikazeSootEnemyAnimations__Class* type_info_ref = nullptr;
        }
        inline app::KamikazeSootEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::KamikazeSootEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemyAnimations__Class>(type_info, "", "KamikazeSootEnemyAnimations");
        }
        inline app::KamikazeSootEnemyAnimations* create() {
            return il2cpp::create_object<app::KamikazeSootEnemyAnimations>(get_class());
        }
    } // namespace KamikazeSootEnemyAnimations
} // namespace app::classes::types
