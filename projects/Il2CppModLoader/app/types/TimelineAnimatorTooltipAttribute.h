#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineAnimatorTooltipAttribute {
        namespace {
            app::TimelineAnimatorTooltipAttribute__Class* type_info_ref = nullptr;
        }
        app::TimelineAnimatorTooltipAttribute__Class** type_info = &type_info_ref;
        inline app::TimelineAnimatorTooltipAttribute__Class* get_class() {
            return il2cpp::get_class<app::TimelineAnimatorTooltipAttribute__Class>(type_info, "Moon.Attributes", "TimelineAnimatorTooltipAttribute");
        }
        inline app::TimelineAnimatorTooltipAttribute* create() {
            return il2cpp::create_object<app::TimelineAnimatorTooltipAttribute>(get_class());
        }
    } // namespace TimelineAnimatorTooltipAttribute
} // namespace app::classes::types
