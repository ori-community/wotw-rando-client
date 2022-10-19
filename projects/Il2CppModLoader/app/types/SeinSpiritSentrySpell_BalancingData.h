#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSpiritSentrySpell_BalancingData {
        namespace {
            inline app::SeinSpiritSentrySpell_BalancingData__Class* type_info_ref = nullptr;
        }
        inline app::SeinSpiritSentrySpell_BalancingData__Class** type_info = &type_info_ref;
        inline app::SeinSpiritSentrySpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSentrySpell_BalancingData__Class>(type_info, "", "SeinSpiritSentrySpell_BalancingData");
        }
        inline app::SeinSpiritSentrySpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinSpiritSentrySpell_BalancingData>(get_class());
        }
    } // namespace SeinSpiritSentrySpell_BalancingData
} // namespace app::classes::types
