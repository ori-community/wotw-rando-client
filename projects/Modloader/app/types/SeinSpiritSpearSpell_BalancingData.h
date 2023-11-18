#pragma once
#include <Modloader/app/structs/SeinSpiritSpearSpell_BalancingData.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritSpearSpell_BalancingData {
        inline app::SeinSpiritSpearSpell_BalancingData__Class** type_info() {
            static app::SeinSpiritSpearSpell_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSpiritSpearSpell_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSpiritSpearSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSpearSpell_BalancingData__Class>(type_info(), "", "SeinSpiritSpearSpell_BalancingData");
        }
        inline app::SeinSpiritSpearSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinSpiritSpearSpell_BalancingData>(get_class());
        }
    } // namespace SeinSpiritSpearSpell_BalancingData
} // namespace app::classes::types
