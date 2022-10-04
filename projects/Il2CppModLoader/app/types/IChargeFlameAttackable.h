#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IChargeFlameAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IChargeFlameAttackable__Class** type_info;
        inline app::IChargeFlameAttackable__Class* get_class() {
            return il2cpp::get_class<app::IChargeFlameAttackable__Class>(type_info, "", "IChargeFlameAttackable");
        }
        inline app::IChargeFlameAttackable* create() {
            return il2cpp::create_object<app::IChargeFlameAttackable>(get_class());
        }
    } // namespace IChargeFlameAttackable
} // namespace app::classes::types
