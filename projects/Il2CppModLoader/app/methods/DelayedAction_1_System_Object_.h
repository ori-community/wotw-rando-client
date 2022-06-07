#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DelayedAction_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00B7FB70, float, get_DonePercentage, (app::DelayedAction_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_1, (app::DelayedAction_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019DF900, void, ctor_2, (app::DelayedAction_1_System_Object_ * this_ptr, app::Action_1_Object_ * action, float time_seconds, app::Object * param))
    IL2CPP_REGISTER_METHOD(0x019DF950, void, ctor_3, (app::DelayedAction_1_System_Object_ * this_ptr, app::Action_1_Object_ * action, int32_t frame_delay, app::Object * param))
    IL2CPP_REGISTER_METHOD(0x019DF9A0, void, ctor_4, (app::DelayedAction_1_System_Object_ * this_ptr, app::Action_1_Object_ * action, float time_seconds, app::Object * param, app::Func_1_Boolean_ * condition, app::Component_1 * owner))
    IL2CPP_REGISTER_METHOD(0x019DFA00, void, ctor_5, (app::DelayedAction_1_System_Object_ * this_ptr, app::Action_1_Object_ * action, int32_t frame_delay, app::Object * param, app::Func_1_Boolean_ * condition, app::Component_1 * owner))
    IL2CPP_REGISTER_METHOD(0x019DFA50, void, PerformDelayed, (app::DelayedAction_1_System_Object_ * this_ptr, app::Action_1_Object_ * action, app::Object * param))
    IL2CPP_REGISTER_METHOD(0x019DFC50, void, OnFixedUpdate, (app::DelayedAction_1_System_Object_ * this_ptr))
}
