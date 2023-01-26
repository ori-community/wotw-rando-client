#pragma once
#include <Modloader/app/structs/UpgradeAbilityItem__Array.h>
#include <Modloader/app/structs/UpgradeAbilityItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpgradeAbilityItem__Array {
        inline app::UpgradeAbilityItem__Array__Class** type_info() {
            static app::UpgradeAbilityItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpgradeAbilityItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpgradeAbilityItem__Array__Class* get_class() {
            return il2cpp::get_class<app::UpgradeAbilityItem__Array__Class>(type_info(), "", "UpgradeAbilityItem[]");
        }
        inline app::UpgradeAbilityItem__Array* create() {
            return il2cpp::create_object<app::UpgradeAbilityItem__Array>(get_class());
        }
    } // namespace UpgradeAbilityItem__Array
} // namespace app::classes::types
