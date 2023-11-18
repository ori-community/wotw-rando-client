#pragma once
#include <Modloader/app/structs/SeinChakramSpell_BalancingData.h>
#include <Modloader/app/structs/SeinChakramSpell_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinChakramSpell_BalancingData {
        inline app::SeinChakramSpell_BalancingData__Class** type_info() {
            static app::SeinChakramSpell_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinChakramSpell_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinChakramSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinChakramSpell_BalancingData__Class>(type_info(), "", "SeinChakramSpell_BalancingData");
        }
        inline app::SeinChakramSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinChakramSpell_BalancingData>(get_class());
        }
    } // namespace SeinChakramSpell_BalancingData
} // namespace app::classes::types
