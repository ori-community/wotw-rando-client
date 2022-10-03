#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MortarWormEnemy_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MortarWormEnemy_States__Class** type_info;
        inline app::MortarWormEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarWormEnemy_States__Class>(type_info, "", "MortarWormEnemy", "States");
        }
        inline app::MortarWormEnemy_States* create() {
            return il2cpp::create_object<app::MortarWormEnemy_States>(get_class());
        }
    } // namespace MortarWormEnemy_States
} // namespace app::classes::types
