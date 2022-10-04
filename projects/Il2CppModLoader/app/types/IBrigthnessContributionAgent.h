#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBrigthnessContributionAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBrigthnessContributionAgent__Class** type_info;
        inline app::IBrigthnessContributionAgent__Class* get_class() {
            return il2cpp::get_class<app::IBrigthnessContributionAgent__Class>(type_info, "", "IBrigthnessContributionAgent");
        }
        inline app::IBrigthnessContributionAgent__Array* create_array(int size) {
            return il2cpp::array_new<app::IBrigthnessContributionAgent__Array>(get_class(), size);
        }
    } // namespace IBrigthnessContributionAgent
} // namespace app::classes::types
