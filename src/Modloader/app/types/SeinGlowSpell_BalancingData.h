#pragma once
#include <Modloader/app/structs/SeinGlowSpell_BalancingData.h>
#include <Modloader/app/structs/SeinGlowSpell_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGlowSpell_BalancingData {
        inline app::SeinGlowSpell_BalancingData__Class** type_info() {
            static app::SeinGlowSpell_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGlowSpell_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGlowSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinGlowSpell_BalancingData__Class>(type_info(), "", "SeinGlowSpell_BalancingData");
        }
        inline app::SeinGlowSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinGlowSpell_BalancingData>(get_class());
        }
    } // namespace SeinGlowSpell_BalancingData
} // namespace app::classes::types
