#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RetaliateShriek {
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsSuspended, (app::RetaliateShriek * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FCE40, void, set_IsSuspended, (app::RetaliateShriek * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0090E420, void, Awake, (app::RetaliateShriek * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0090E440, void, FixedUpdate, (app::RetaliateShriek * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0090E680, void, OnTriggerStay, (app::RetaliateShriek * this_ptr, app::Collider * other))
    IL2CPP_REGISTER_METHOD(0x0090EA60, void, OverrideOriginPosition, (app::RetaliateShriek * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0090EA80, void, StartTimeline, (app::RetaliateShriek * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0090EC50, void, OnTimelineSequenceStopEvent, (app::RetaliateShriek * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754F80, RetaliateShriek_OnTimelineSequenceStopEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::RetaliateShriek * this_ptr))
}
