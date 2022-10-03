#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageDealer_TweakDamageDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageDealer_TweakDamageDelegate__Class** type_info;
        inline app::DamageDealer_TweakDamageDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageDealer_TweakDamageDelegate__Class>(type_info, "", "DamageDealer", "TweakDamageDelegate");
        }
        inline app::DamageDealer_TweakDamageDelegate* create() {
            return il2cpp::create_object<app::DamageDealer_TweakDamageDelegate>(get_class());
        }
    } // namespace DamageDealer_TweakDamageDelegate
} // namespace app::classes::types
