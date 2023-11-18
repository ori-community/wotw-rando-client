#pragma once
#include <Modloader/app/structs/SeinSpiritSentrySpell_BalancingData.h>
#include <Modloader/app/structs/SeinSpiritSentrySpell_BalancingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritSentrySpell_BalancingData {
        inline app::SeinSpiritSentrySpell_BalancingData__Class** type_info() {
            static app::SeinSpiritSentrySpell_BalancingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSpiritSentrySpell_BalancingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSpiritSentrySpell_BalancingData__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSentrySpell_BalancingData__Class>(type_info(), "", "SeinSpiritSentrySpell_BalancingData");
        }
        inline app::SeinSpiritSentrySpell_BalancingData* create() {
            return il2cpp::create_object<app::SeinSpiritSentrySpell_BalancingData>(get_class());
        }
    } // namespace SeinSpiritSentrySpell_BalancingData
} // namespace app::classes::types
