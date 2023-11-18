#pragma once
#include <Modloader/app/structs/SeinChakramSpell_BalancingData_ChakramDamageSettings__Array.h>
#include <Modloader/app/structs/SeinChakramSpell_BalancingData_ChakramDamageSettings__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinChakramSpell_BalancingData_ChakramDamageSettings__Array {
        inline app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array__Class** type_info() {
            static app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array__Class>(type_info(), "", "SeinChakramSpell_BalancingData+ChakramDamageSettings[]");
        }
        inline app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array* create() {
            return il2cpp::create_object<app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array>(get_class());
        }
    } // namespace SeinChakramSpell_BalancingData_ChakramDamageSettings__Array
} // namespace app::classes::types
