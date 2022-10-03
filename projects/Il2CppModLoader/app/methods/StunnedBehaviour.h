#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::StunnedBehaviour {
    IL2CPP_REGISTER_METHOD(0x00672050, void, OnInitializeTask, (app::StunnedBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00672120, void, OnEnterTask, (app::StunnedBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00672130, app::BehaviourStatus__Enum, OnExecuteTask, (app::StunnedBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00672230, void, ChangeState, (app::StunnedBehaviour * this_ptr, app::StunnedBehaviour_StunnedState__Enum state))
    IL2CPP_REGISTER_METHOD(0x006724D0, void, OnExitTask, (app::StunnedBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::StunnedBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::StunnedBehaviour * this_ptr))
} // namespace app::classes::StunnedBehaviour
