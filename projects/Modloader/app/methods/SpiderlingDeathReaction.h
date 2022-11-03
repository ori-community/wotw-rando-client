#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiderlingDeathReaction {
    IL2CPP_REGISTER_METHOD(0x011BF7D0, void, OnInitializeTask, (app::SpiderlingDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011BF8F0, void, ResetTimeline, (app::SpiderlingDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011BFB50, void, ModifyDeathKickbackForce, (app::SpiderlingDeathReaction * this_ptr, app::Damage* damage, float min_boost, float min_magntiude, float min_up_direction))
    IL2CPP_REGISTER_METHOD(0x011BFE30, void, OnEnterTask, (app::SpiderlingDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011C0510, app::BehaviourStatus__Enum, OnExecuteTask, (app::SpiderlingDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011C0A70, void, OnExitTask, (app::SpiderlingDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011C0C40, void, OnBurrowFinished, (app::SpiderlingDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047523E8, SpiderlingDeathReaction_OnBurrowFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011C0C80, void, StopCurrentTimeline, (app::SpiderlingDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011C0D60, void, StartTimeline, (app::SpiderlingDeathReaction * this_ptr, app::MoonTimeline* timeline, app::Action* on_stop))
    IL2CPP_REGISTER_METHOD(0x011C0DC0, void, PlayShakeTimeline, (app::SpiderlingDeathReaction * this_ptr, bool forced))
    IL2CPP_REGISTER_METHOD(0x011C0EE0, void, HandleCollision, (app::SpiderlingDeathReaction * this_ptr, app::MoonControllerColliderHit hit))
    IL2CPP_REGISTER_METHODINFO(0x047842C8, SpiderlingDeathReaction_HandleCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x011C1090, void, ctor, (app::SpiderlingDeathReaction * this_ptr))
} // namespace app::classes::SpiderlingDeathReaction
