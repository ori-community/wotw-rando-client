#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinChakramSpell_BalancingData_ChakramDamageSettings {
        inline app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Class** type_info = (app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Class**)(modloader::win::memory::resolve_rva(0x04716488));
        inline app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Class>(type_info, "", "SeinChakramSpell_BalancingData", "ChakramDamageSettings");
        }
        inline app::SeinChakramSpell_BalancingData_ChakramDamageSettings* create() {
            return il2cpp::create_object<app::SeinChakramSpell_BalancingData_ChakramDamageSettings>(get_class());
        }
        inline app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array>(get_class(), size);
        }
        inline app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array* create_array(const std::vector<app::SeinChakramSpell_BalancingData_ChakramDamageSettings*>& items) {
            return il2cpp::array_new<app::SeinChakramSpell_BalancingData_ChakramDamageSettings__Array>(get_class(), items);
        }
    } // namespace SeinChakramSpell_BalancingData_ChakramDamageSettings
} // namespace app::classes::types
