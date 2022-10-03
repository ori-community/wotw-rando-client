#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TimelineStateCondition {
    IL2CPP_REGISTER_METHOD(0x00446590, bool, ShowEventTrigger, (app::TimelineStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F7EC0, app::MoonTimeline*, get_Target, (app::TimelineStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F7FB0, void, Awake, (app::TimelineStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A3B40, void, HitEventTrigger, (app::TimelineStateCondition * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474D1D0, TimelineStateCondition_HitEventTrigger__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010F82B0, void, OnDestroy, (app::TimelineStateCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F8450, void, OnRestoreCheckpoint, (app::TimelineStateCondition * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047040A8, TimelineStateCondition_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x010F8460, bool, Validate, (app::TimelineStateCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TimelineStateCondition * this_ptr))
} // namespace app::classes::TimelineStateCondition
