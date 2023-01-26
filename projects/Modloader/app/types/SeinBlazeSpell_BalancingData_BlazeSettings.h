#pragma once
#include <Modloader/app/structs/SeinBlazeSpell_BalancingData_BlazeSettings.h>
#include <Modloader/app/structs/SeinBlazeSpell_BalancingData_BlazeSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBlazeSpell_BalancingData_BlazeSettings {
        inline app::SeinBlazeSpell_BalancingData_BlazeSettings__Class** type_info() {
            static app::SeinBlazeSpell_BalancingData_BlazeSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinBlazeSpell_BalancingData_BlazeSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinBlazeSpell_BalancingData_BlazeSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBlazeSpell_BalancingData_BlazeSettings__Class>(type_info(), "", "SeinBlazeSpell_BalancingData", "BlazeSettings");
        }
        inline app::SeinBlazeSpell_BalancingData_BlazeSettings* create() {
            return il2cpp::create_object<app::SeinBlazeSpell_BalancingData_BlazeSettings>(get_class());
        }
    } // namespace SeinBlazeSpell_BalancingData_BlazeSettings
} // namespace app::classes::types
