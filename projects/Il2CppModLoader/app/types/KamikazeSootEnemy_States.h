#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemy_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KamikazeSootEnemy_States__Class** type_info;
        inline app::KamikazeSootEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::KamikazeSootEnemy_States__Class>(type_info, "", "KamikazeSootEnemy", "States");
        }
        inline app::KamikazeSootEnemy_States* create() {
            return il2cpp::create_object<app::KamikazeSootEnemy_States>(get_class());
        }
    } // namespace KamikazeSootEnemy_States
} // namespace app::classes::types
