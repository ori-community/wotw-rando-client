#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DelayedAction_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x019E00E0, void, ctor_1, (app::DelayedAction_1_System_Single_ * this_ptr, app::Action_1_Single_ * action, float time_seconds, float param))
    IL2CPP_REGISTER_METHODINFO(0x047450F0, DelayedAction_1_System_Single___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B7FB70, float, get_DonePercentage, (app::DelayedAction_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_2, (app::DelayedAction_1_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E0130, void, ctor_3, (app::DelayedAction_1_System_Single_ * this_ptr, app::Action_1_Single_ * action, int32_t frame_delay, float param))
    IL2CPP_REGISTER_METHOD(0x019E0180, void, ctor_4, (app::DelayedAction_1_System_Single_ * this_ptr, app::Action_1_Single_ * action, float time_seconds, float param, app::Func_1_Boolean_ * condition, app::Component_1 * owner))
    IL2CPP_REGISTER_METHOD(0x019E01E0, void, ctor_5, (app::DelayedAction_1_System_Single_ * this_ptr, app::Action_1_Single_ * action, int32_t frame_delay, float param, app::Func_1_Boolean_ * condition, app::Component_1 * owner))
    IL2CPP_REGISTER_METHOD(0x019E0230, void, PerformDelayed, (app::DelayedAction_1_System_Single_ * this_ptr, app::Action_1_Single_ * action, float param))
    IL2CPP_REGISTER_METHOD(0x019E0430, void, OnFixedUpdate, (app::DelayedAction_1_System_Single_ * this_ptr))
}
