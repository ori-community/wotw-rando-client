#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinChakramSpell_BalancingData {
        namespace {
            inline app::SeinChakramSpell_BalancingData__Class* type_info_ref = nullptr;
        }
        inline app::SeinChakramSpell_BalancingData__Class** type_info = &type_info_ref;
        inline app::SeinChakramSpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinChakramSpell_BalancingData__Class>(type_info, "", "SeinChakramSpell_BalancingData");
        }
        inline app::SeinChakramSpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinChakramSpell_BalancingData>(get_class());
        }
    } // namespace SeinChakramSpell_BalancingData
} // namespace app::classes::types
