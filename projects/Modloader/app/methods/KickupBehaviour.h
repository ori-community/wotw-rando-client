#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/KickupBehaviour.h>
#include <Modloader/app/structs/KickupBehaviour_KickupState__Enum.h>

namespace app::classes::KickupBehaviour {
    IL2CPP_REGISTER_METHOD(0x00E72A70, void, OnInitializeTask, app::KickupBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00E72B50, void, OnEnterTask, app::KickupBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00E72B60, app::BehaviourStatus__Enum, OnExecuteTask, app::KickupBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00E72DD0, void, ChangeState, app::KickupBehaviour* this_ptr, app::KickupBehaviour_KickupState__Enum state)
    IL2CPP_REGISTER_METHOD(0x00E732C0, void, OnExitTask, app::KickupBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00E73680, void, KickupAnimEnd, app::KickupBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E73690, void, LandingAnimEnd, app::KickupBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, app::KickupBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, app::KickupBehaviour* this_ptr)
} // namespace app::classes::KickupBehaviour
