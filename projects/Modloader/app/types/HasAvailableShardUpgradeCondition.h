#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HasAvailableShardUpgradeCondition {
        namespace {
            inline app::HasAvailableShardUpgradeCondition__Class* type_info_ref = nullptr;
        }
        inline app::HasAvailableShardUpgradeCondition__Class** type_info = &type_info_ref;
        inline app::HasAvailableShardUpgradeCondition__Class* get_class() {
            return il2cpp::get_class<app::HasAvailableShardUpgradeCondition__Class>(type_info, "", "HasAvailableShardUpgradeCondition");
        }
        inline app::HasAvailableShardUpgradeCondition* create() {
            return il2cpp::create_object<app::HasAvailableShardUpgradeCondition>(get_class());
        }
    } // namespace HasAvailableShardUpgradeCondition
} // namespace app::classes::types
