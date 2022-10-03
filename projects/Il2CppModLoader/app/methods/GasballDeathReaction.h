#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GasballDeathReaction {
    IL2CPP_REGISTER_METHOD(0x0041DB70, void, SetInstantDeath, (app::GasballDeathReaction * this_ptr, bool instant_death))
    IL2CPP_REGISTER_METHOD(0x0041DB80, void, OnInitializeTask, (app::GasballDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0041DBD0, void, OnEnterTask, (app::GasballDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0041E2A0, void, SpawnExplosion, (app::GasballDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04778DE0, GasballDeathReaction_SpawnExplosion__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0041E730, app::BehaviourStatus__Enum, OnExecuteTask, (app::GasballDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0041E870, void, EndReaction, (app::GasballDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478DDD0, GasballDeathReaction_EndReaction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (app::GasballDeathReaction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::GasballDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0041EB70, void, ctor, (app::GasballDeathReaction * this_ptr))
} // namespace app::classes::GasballDeathReaction
