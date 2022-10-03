#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TempBrigthnessContributionAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TempBrigthnessContributionAgent__Class** type_info;
        inline app::TempBrigthnessContributionAgent__Class* get_class() {
            return il2cpp::get_class<app::TempBrigthnessContributionAgent__Class>(type_info, "", "TempBrigthnessContributionAgent");
        }
        inline app::TempBrigthnessContributionAgent* create() {
            return il2cpp::create_object<app::TempBrigthnessContributionAgent>(get_class());
        }
        inline app::TempBrigthnessContributionAgent__Boxed* box(app::TempBrigthnessContributionAgent value) {
            return il2cpp::box_value<app::TempBrigthnessContributionAgent__Boxed>(get_class(), value);
        }
    } // namespace TempBrigthnessContributionAgent
} // namespace app::classes::types
