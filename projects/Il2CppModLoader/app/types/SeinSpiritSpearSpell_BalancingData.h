#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritSpearSpell_BalancingData {
        namespace {
            app::SeinSpiritSpearSpell_BalancingData__Class* type_info_ref = nullptr;
        }
        app::SeinSpiritSpearSpell_BalancingData__Class** type_info = &type_info_ref;
        inline app::SeinSpiritSpearSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSpearSpell_BalancingData__Class>(type_info, "", "SeinSpiritSpearSpell_BalancingData");
        }
        inline app::SeinSpiritSpearSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinSpiritSpearSpell_BalancingData>(get_class());
        }
    } // namespace SeinSpiritSpearSpell_BalancingData
} // namespace app::classes::types
