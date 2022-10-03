#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlobalBrightnessController_BrigthnessContributionOrder__Enum {
        namespace {
            app::GlobalBrightnessController_BrigthnessContributionOrder__Enum__Class* type_info_ref = nullptr;
        }
        app::GlobalBrightnessController_BrigthnessContributionOrder__Enum__Class** type_info = &type_info_ref;
        inline app::GlobalBrightnessController_BrigthnessContributionOrder__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GlobalBrightnessController_BrigthnessContributionOrder__Enum__Class>(type_info, "", "GlobalBrightnessController", "BrigthnessContributionOrder");
        }
        inline app::GlobalBrightnessController_BrigthnessContributionOrder__Enum* create() {
            return il2cpp::create_object<app::GlobalBrightnessController_BrigthnessContributionOrder__Enum>(get_class());
        }
    } // namespace GlobalBrightnessController_BrigthnessContributionOrder__Enum
} // namespace app::classes::types
