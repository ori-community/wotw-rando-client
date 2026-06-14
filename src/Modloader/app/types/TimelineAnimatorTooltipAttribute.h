#pragma once
#include <Modloader/app/structs/TimelineAnimatorTooltipAttribute.h>
#include <Modloader/app/structs/TimelineAnimatorTooltipAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimelineAnimatorTooltipAttribute {
        inline app::TimelineAnimatorTooltipAttribute__Class** type_info() {
            static app::TimelineAnimatorTooltipAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TimelineAnimatorTooltipAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TimelineAnimatorTooltipAttribute__Class* get_class() {
            return il2cpp::get_class<app::TimelineAnimatorTooltipAttribute__Class>(type_info(), "Moon.Attributes", "TimelineAnimatorTooltipAttribute");
        }
        inline app::TimelineAnimatorTooltipAttribute* create() {
            return il2cpp::create_object<app::TimelineAnimatorTooltipAttribute>(get_class());
        }
    } // namespace TimelineAnimatorTooltipAttribute
} // namespace app::classes::types
