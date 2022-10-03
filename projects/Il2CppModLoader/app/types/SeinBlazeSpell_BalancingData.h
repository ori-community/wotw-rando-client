#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinBlazeSpell_BalancingData {
        namespace {
            app::SeinBlazeSpell_BalancingData__Class* type_info_ref = nullptr;
        }
        app::SeinBlazeSpell_BalancingData__Class** type_info = &type_info_ref;
        inline app::SeinBlazeSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinBlazeSpell_BalancingData__Class>(type_info, "", "SeinBlazeSpell_BalancingData");
        }
        inline app::SeinBlazeSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinBlazeSpell_BalancingData>(get_class());
        }
    } // namespace SeinBlazeSpell_BalancingData
} // namespace app::classes::types
