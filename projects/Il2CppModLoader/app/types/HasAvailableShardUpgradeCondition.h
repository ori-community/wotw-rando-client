#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HasAvailableShardUpgradeCondition {
        namespace {
            app::HasAvailableShardUpgradeCondition__Class* type_info_ref = nullptr;
        }
        app::HasAvailableShardUpgradeCondition__Class** type_info = &type_info_ref;
        inline app::HasAvailableShardUpgradeCondition__Class* get_class() {
            return il2cpp::get_class<app::HasAvailableShardUpgradeCondition__Class>(type_info, "", "HasAvailableShardUpgradeCondition");
        }
        inline app::HasAvailableShardUpgradeCondition* create() {
            return il2cpp::create_object<app::HasAvailableShardUpgradeCondition>(get_class());
        }
    } // namespace HasAvailableShardUpgradeCondition
} // namespace app::classes::types
