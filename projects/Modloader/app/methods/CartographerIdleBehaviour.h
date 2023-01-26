#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CartographerIdleBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::CartographerIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::CartographerIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B413A0, void, OnInitializeTask, (app::CartographerIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B414A0, void, PlayBaseIdle, (app::CartographerIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B41620, void, OnEnterTask, (app::CartographerIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B416E0, void, FinishBreakup, (app::CartographerIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B418E0, void, PlayBreakup, (app::CartographerIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B41C60, app::BehaviourStatus__Enum, OnExecuteTask, (app::CartographerIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B41CF0, void, OnExitTask, (app::CartographerIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::CartographerIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::CartographerIdleBehaviour * this_ptr))
} // namespace app::classes::CartographerIdleBehaviour
