#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGlowSpell_BalancingData {
        namespace {
            app::SeinGlowSpell_BalancingData__Class* type_info_ref = nullptr;
        }
        app::SeinGlowSpell_BalancingData__Class** type_info = &type_info_ref;
        inline app::SeinGlowSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinGlowSpell_BalancingData__Class>(type_info, "", "SeinGlowSpell_BalancingData");
        }
        inline app::SeinGlowSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinGlowSpell_BalancingData>(get_class());
        }
    } // namespace SeinGlowSpell_BalancingData
} // namespace app::classes::types
