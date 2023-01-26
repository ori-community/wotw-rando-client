#pragma once
#include <Modloader/app/structs/SeinBlazeSpell_BalancingData.h>
#include <Modloader/app/structs/SeinBlazeSpell_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBlazeSpell_BalancingData {
        inline app::SeinBlazeSpell_BalancingData__Class** type_info() {
            static app::SeinBlazeSpell_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinBlazeSpell_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinBlazeSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinBlazeSpell_BalancingData__Class>(type_info(), "", "SeinBlazeSpell_BalancingData");
        }
        inline app::SeinBlazeSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinBlazeSpell_BalancingData>(get_class());
        }
    } // namespace SeinBlazeSpell_BalancingData
} // namespace app::classes::types
