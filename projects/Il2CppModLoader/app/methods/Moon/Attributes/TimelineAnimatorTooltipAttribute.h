#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Attributes::TimelineAnimatorTooltipAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Toolip, (app::TimelineAnimatorTooltipAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Toolip, (app::TimelineAnimatorTooltipAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::TimelineAnimatorTooltipAttribute * this_ptr, app::String* toolip))
} // namespace app::classes::Moon::Attributes::TimelineAnimatorTooltipAttribute
