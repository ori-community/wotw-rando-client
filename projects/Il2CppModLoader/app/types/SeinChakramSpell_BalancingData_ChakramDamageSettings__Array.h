#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinChakramSpell_BalancingData_ChakramDamageSettings__Array {
        namespace {
            app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array__Class* type_info_ref = nullptr;
        }
        app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array__Class** type_info = &type_info_ref;
        inline app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array__Class>(type_info, "", "SeinChakramSpell_BalancingData+ChakramDamageSettings[]");
        }
        inline app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array* create() {
            return il2cpp::create_object<app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array>(get_class());
        }
    } // namespace SeinChakramSpell_BalancingData_ChakramDamageSettings__Array
} // namespace app::classes::types
