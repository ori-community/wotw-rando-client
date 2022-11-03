#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinMeditateSpell_BalancingData {
        namespace {
            inline app::SeinMeditateSpell_BalancingData__Class* type_info_ref = nullptr;
        }
        inline app::SeinMeditateSpell_BalancingData__Class** type_info = &type_info_ref;
        inline app::SeinMeditateSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinMeditateSpell_BalancingData__Class>(type_info, "", "SeinMeditateSpell_BalancingData");
        }
        inline app::SeinMeditateSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinMeditateSpell_BalancingData>(get_class());
        }
    } // namespace SeinMeditateSpell_BalancingData
} // namespace app::classes::types
