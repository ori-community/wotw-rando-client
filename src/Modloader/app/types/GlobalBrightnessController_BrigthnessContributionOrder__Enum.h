#pragma once
#include <Modloader/app/structs/GlobalBrightnessController_BrigthnessContributionOrder__Enum.h>
#include <Modloader/app/structs/GlobalBrightnessController_BrigthnessContributionOrder__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlobalBrightnessController_BrigthnessContributionOrder__Enum {
        inline app::GlobalBrightnessController_BrigthnessContributionOrder__Enum__Class** type_info() {
            static app::GlobalBrightnessController_BrigthnessContributionOrder__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlobalBrightnessController_BrigthnessContributionOrder__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlobalBrightnessController_BrigthnessContributionOrder__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GlobalBrightnessController_BrigthnessContributionOrder__Enum__Class>(type_info(), "", "GlobalBrightnessController", "BrigthnessContributionOrder");
        }
        inline app::GlobalBrightnessController_BrigthnessContributionOrder__Enum* create() {
            return il2cpp::create_object<app::GlobalBrightnessController_BrigthnessContributionOrder__Enum>(get_class());
        }
    } // namespace GlobalBrightnessController_BrigthnessContributionOrder__Enum
} // namespace app::classes::types
