#pragma once
#include <Modloader/app/structs/SeinChakramSpell_BalancingData_ChakramSettings.h>
#include <Modloader/app/structs/SeinChakramSpell_BalancingData_ChakramSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinChakramSpell_BalancingData_ChakramSettings {
        inline app::SeinChakramSpell_BalancingData_ChakramSettings__Class** type_info() {
            static app::SeinChakramSpell_BalancingData_ChakramSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinChakramSpell_BalancingData_ChakramSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinChakramSpell_BalancingData_ChakramSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinChakramSpell_BalancingData_ChakramSettings__Class>(type_info(), "", "SeinChakramSpell_BalancingData", "ChakramSettings");
        }
        inline app::SeinChakramSpell_BalancingData_ChakramSettings* create() {
            return il2cpp::create_object<app::SeinChakramSpell_BalancingData_ChakramSettings>(get_class());
        }
    } // namespace SeinChakramSpell_BalancingData_ChakramSettings
} // namespace app::classes::types
