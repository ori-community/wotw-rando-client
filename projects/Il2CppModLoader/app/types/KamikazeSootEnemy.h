#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemy {
        namespace {
            app::KamikazeSootEnemy__Class* type_info_ref = nullptr;
        }
        app::KamikazeSootEnemy__Class** type_info = &type_info_ref;
        inline app::KamikazeSootEnemy__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemy__Class>(type_info, "", "KamikazeSootEnemy");
        }
        inline app::KamikazeSootEnemy* create() {
            return il2cpp::create_object<app::KamikazeSootEnemy>(get_class());
        }
    } // namespace KamikazeSootEnemy
} // namespace app::classes::types
