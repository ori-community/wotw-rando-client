#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MortarWormEnemy_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MortarWormEnemy_c__Class** type_info;
        inline app::MortarWormEnemy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MortarWormEnemy_c__Class>(type_info, "", "MortarWormEnemy", "<>c");
        }
        inline app::MortarWormEnemy_c* create() {
            return il2cpp::create_object<app::MortarWormEnemy_c>(get_class());
        }
    } // namespace MortarWormEnemy_c
} // namespace app::classes::types
