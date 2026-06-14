#pragma once
#include <Modloader/app/structs/SeinMeditateSpell_BalancingData.h>
#include <Modloader/app/structs/SeinMeditateSpell_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinMeditateSpell_BalancingData {
        inline app::SeinMeditateSpell_BalancingData__Class** type_info() {
            static app::SeinMeditateSpell_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinMeditateSpell_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinMeditateSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinMeditateSpell_BalancingData__Class>(type_info(), "", "SeinMeditateSpell_BalancingData");
        }
        inline app::SeinMeditateSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinMeditateSpell_BalancingData>(get_class());
        }
    } // namespace SeinMeditateSpell_BalancingData
} // namespace app::classes::types
