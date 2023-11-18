#pragma once
#include <Modloader/app/structs/CombinedUpgradeEffectiveness.h>
#include <Modloader/app/structs/CombinedUpgradeEffectiveness__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CombinedUpgradeEffectiveness {
        inline app::CombinedUpgradeEffectiveness__Class** type_info() {
            static app::CombinedUpgradeEffectiveness__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CombinedUpgradeEffectiveness__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CombinedUpgradeEffectiveness__Class* get_class() {
            return il2cpp::get_class<app::CombinedUpgradeEffectiveness__Class>(type_info(), "", "CombinedUpgradeEffectiveness");
        }
        inline app::CombinedUpgradeEffectiveness* create() {
            return il2cpp::create_object<app::CombinedUpgradeEffectiveness>(get_class());
        }
    } // namespace CombinedUpgradeEffectiveness
} // namespace app::classes::types
