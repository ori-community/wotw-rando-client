#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KickupDeathBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/KickupDeathBehaviour_KickupState__Enum.h>

namespace app::classes::KickupDeathBehaviour {
    IL2CPP_REGISTER_METHOD(0x00E736D0, void, OnInitializeTask, (app::KickupDeathBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E737A0, void, OnEnterTask, (app::KickupDeathBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E737B0, app::BehaviourStatus__Enum, OnExecuteTask, (app::KickupDeathBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E73C50, void, ChangeState, (app::KickupDeathBehaviour * this_ptr, app::KickupDeathBehaviour_KickupState__Enum state))
    IL2CPP_REGISTER_METHOD(0x00E740C0, void, OnExitTask, (app::KickupDeathBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00672040, bool, KeepPlayingFallingLoop, (app::KickupDeathBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473FE28, KickupDeathBehaviour_KeepPlayingFallingLoop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::KickupDeathBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::KickupDeathBehaviour * this_ptr))
} // namespace app::classes::KickupDeathBehaviour
