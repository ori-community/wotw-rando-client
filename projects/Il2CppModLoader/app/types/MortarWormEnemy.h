#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MortarWormEnemy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MortarWormEnemy__Class** type_info;
        inline app::MortarWormEnemy__Class* get_class() {
            return il2cpp::get_class<app::MortarWormEnemy__Class>(type_info, "", "MortarWormEnemy");
        }
        inline app::MortarWormEnemy* create() {
            return il2cpp::create_object<app::MortarWormEnemy>(get_class());
        }
    } // namespace MortarWormEnemy
} // namespace app::classes::types
