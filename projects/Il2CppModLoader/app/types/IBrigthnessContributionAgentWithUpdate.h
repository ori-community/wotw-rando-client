#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBrigthnessContributionAgentWithUpdate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBrigthnessContributionAgentWithUpdate__Class** type_info;
        inline app::IBrigthnessContributionAgentWithUpdate__Class* get_class() {
            return il2cpp::get_class<app::IBrigthnessContributionAgentWithUpdate__Class>(type_info, "", "IBrigthnessContributionAgentWithUpdate");
        }
        inline app::IBrigthnessContributionAgentWithUpdate* create() {
            return il2cpp::create_object<app::IBrigthnessContributionAgentWithUpdate>(get_class());
        }
    } // namespace IBrigthnessContributionAgentWithUpdate
} // namespace app::classes::types
