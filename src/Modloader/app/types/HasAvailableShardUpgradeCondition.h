#pragma once
#include <Modloader/app/structs/HasAvailableShardUpgradeCondition.h>
#include <Modloader/app/structs/HasAvailableShardUpgradeCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasAvailableShardUpgradeCondition {
        inline app::HasAvailableShardUpgradeCondition__Class** type_info() {
            static app::HasAvailableShardUpgradeCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasAvailableShardUpgradeCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasAvailableShardUpgradeCondition__Class* get_class() {
            return il2cpp::get_class<app::HasAvailableShardUpgradeCondition__Class>(type_info(), "", "HasAvailableShardUpgradeCondition");
        }
        inline app::HasAvailableShardUpgradeCondition* create() {
            return il2cpp::create_object<app::HasAvailableShardUpgradeCondition>(get_class());
        }
    } // namespace HasAvailableShardUpgradeCondition
} // namespace app::classes::types
