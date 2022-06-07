#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MantisDeathReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x009F7B20, void, OnInitializeTask, (app::MantisDeathReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x009F7E10, void, StartDeathTimeline, (app::MantisDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F7FA0, void, StartTimeline, (app::MantisDeathReactionBehaviour * this_ptr, app::MoonTimeline * timeline, app::Action * on_stop))
    IL2CPP_REGISTER_METHOD(0x009F7FE0, void, StopCurrentTimeline, (app::MantisDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F80E0, void, EndReaction, (app::MantisDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047738C8, MantisDeathReactionBehaviour_EndReaction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009F8120, void, OnEnterTask, (app::MantisDeathReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x009F84E0, app::BehaviourStatus__Enum, OnExecuteTask, (app::MantisDeathReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x009F8640, void, OnExitTask, (app::MantisDeathReactionBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x009F8650, void, SetState, (app::MantisDeathReactionBehaviour * this_ptr, app::MantisDeathReactionBehaviour_State__Enum new_state))
    IL2CPP_REGISTER_METHOD(0x009F8BB0, void, UpdateState, (app::MantisDeathReactionBehaviour * this_ptr, app::MantisDeathReactionBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x009F8D00, void, EnterDrown, (app::MantisDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F9120, bool, InWater, (app::MantisDeathReactionBehaviour * this_ptr, float check_offset))
    IL2CPP_REGISTER_METHOD(0x009F92F0, void, UpdateDrown, (app::MantisDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F9530, app::Vector3, ProcessRootMotion, (app::MantisDeathReactionBehaviour * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHOD(0x009F9580, void, ctor, (app::MantisDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009F9660, void, _OnInitializeTask_b__28_0, (app::MantisDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04798680, MantisDeathReactionBehaviour__OnInitializeTask_b__28_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009F96A0, void, _SetState_b__36_0, (app::MantisDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04783CD0, MantisDeathReactionBehaviour__SetState_b__36_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009F80E0, void, _EnterDrown_b__38_0, (app::MantisDeathReactionBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04719598, MantisDeathReactionBehaviour__EnterDrown_b__38_0__MethodInfo)
}
