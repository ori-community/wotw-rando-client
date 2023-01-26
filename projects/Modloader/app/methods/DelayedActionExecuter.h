#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DelayedActionExecuter.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/ActionWithDuration.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::DelayedActionExecuter {
    IL2CPP_REGISTER_METHOD(0x00724010, void, set_StartTime, (app::DelayedActionExecuter * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_StartTime, (app::DelayedActionExecuter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B80300, void, ExecuteAction, (app::DelayedActionExecuter * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B803C0, void, StopAction, (app::DelayedActionExecuter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B80520, app::ActionWithDuration*, get_ActionWithDuration, (app::DelayedActionExecuter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B80630, app::ActionMethod*, get_ActionMethod, (app::DelayedActionExecuter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DelayedActionExecuter * this_ptr))
} // namespace app::classes::DelayedActionExecuter
