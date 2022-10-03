#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingEnemy_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RammingEnemy_States__Class** type_info;
        inline app::RammingEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingEnemy_States__Class>(type_info, "", "RammingEnemy", "States");
        }
        inline app::RammingEnemy_States* create() {
            return il2cpp::create_object<app::RammingEnemy_States>(get_class());
        }
    } // namespace RammingEnemy_States
} // namespace app::classes::types
