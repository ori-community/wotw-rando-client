#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WandererIdleBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::WandererIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008C79D0, void, OnInitializeTask, (app::WandererIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008C7AD0, void, PlayBaseIdle, (app::WandererIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C7D50, void, OnEnterTask, (app::WandererIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008C7E10, void, FinishBreakup, (app::WandererIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04709948, WandererIdleBehaviour_FinishBreakup__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008C8010, void, PlayBreakup, (app::WandererIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C8400, app::BehaviourStatus__Enum, OnExecuteTask, (app::WandererIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008C8490, void, OnExitTask, (app::WandererIdleBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::WandererIdleBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::WandererIdleBehaviour * this_ptr))
} // namespace app::classes::WandererIdleBehaviour
