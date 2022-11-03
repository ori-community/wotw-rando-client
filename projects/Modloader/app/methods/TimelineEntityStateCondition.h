#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TimelineEntityStateCondition {
    IL2CPP_REGISTER_METHOD(0x010F6BB0, app::TimelineEntity*, get_Target, (app::TimelineEntityStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F6CA0, bool, Validate, (app::TimelineEntityStateCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TimelineEntityStateCondition * this_ptr))
} // namespace app::classes::TimelineEntityStateCondition
