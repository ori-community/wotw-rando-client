#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageDealer_OverrideInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamageDealer_OverrideInfo__Class** type_info;
        inline app::DamageDealer_OverrideInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageDealer_OverrideInfo__Class>(type_info, "", "DamageDealer", "OverrideInfo");
        }
        inline app::DamageDealer_OverrideInfo* create() {
            return il2cpp::create_object<app::DamageDealer_OverrideInfo>(get_class());
        }
        inline app::DamageDealer_OverrideInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageDealer_OverrideInfo__Array>(get_class(), size);
        }
    } // namespace DamageDealer_OverrideInfo
} // namespace app::classes::types
