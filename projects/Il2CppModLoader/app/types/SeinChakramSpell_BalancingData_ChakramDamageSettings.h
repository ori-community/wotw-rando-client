#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinChakramSpell_BalancingData_ChakramDamageSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Class** type_info;
        inline app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Class>(type_info, "", "SeinChakramSpell_BalancingData", "ChakramDamageSettings");
        }
        inline app::SeinChakramSpell_BalancingData_ChakramDamageSettings* create() {
            return il2cpp::create_object<app::SeinChakramSpell_BalancingData_ChakramDamageSettings>(get_class());
        }
        inline app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array>(get_class(), size);
        }
    } // namespace SeinChakramSpell_BalancingData_ChakramDamageSettings
} // namespace app::classes::types
