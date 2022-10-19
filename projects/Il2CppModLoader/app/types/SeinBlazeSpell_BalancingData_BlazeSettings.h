#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinBlazeSpell_BalancingData_BlazeSettings {
        namespace {
            inline app::SeinBlazeSpell_BalancingData_BlazeSettings__Class* type_info_ref = nullptr;
        }
        inline app::SeinBlazeSpell_BalancingData_BlazeSettings__Class** type_info = &type_info_ref;
        inline app::SeinBlazeSpell_BalancingData_BlazeSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBlazeSpell_BalancingData_BlazeSettings__Class>(type_info, "", "SeinBlazeSpell_BalancingData", "BlazeSettings");
        }
        inline app::SeinBlazeSpell_BalancingData_BlazeSettings* create() {
            return il2cpp::create_object<app::SeinBlazeSpell_BalancingData_BlazeSettings>(get_class());
        }
    } // namespace SeinBlazeSpell_BalancingData_BlazeSettings
} // namespace app::classes::types
