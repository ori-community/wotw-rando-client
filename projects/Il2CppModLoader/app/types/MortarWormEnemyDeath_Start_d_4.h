#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MortarWormEnemyDeath_Start_d_4 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MortarWormEnemyDeath_Start_d_4__Class** type_info;
        inline app::MortarWormEnemyDeath_Start_d_4__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarWormEnemyDeath_Start_d_4__Class>(type_info, "", "MortarWormEnemyDeath", "<Start>d__4");
        }
        inline app::MortarWormEnemyDeath_Start_d_4* create() {
            return il2cpp::create_object<app::MortarWormEnemyDeath_Start_d_4>(get_class());
        }
    } // namespace MortarWormEnemyDeath_Start_d_4
} // namespace app::classes::types
