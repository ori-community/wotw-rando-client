#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OriFlyBackToPlayerAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::OriFlyBackToPlayerAction {
    IL2CPP_REGISTER_METHOD(0x0043BA80, void, Perform, (app::OriFlyBackToPlayerAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, (app::OriFlyBackToPlayerAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043BB30, bool, get_IsPerforming, (app::OriFlyBackToPlayerAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_Duration, (app::OriFlyBackToPlayerAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Duration, (app::OriFlyBackToPlayerAction * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0043BB90, void, ctor, (app::OriFlyBackToPlayerAction * this_ptr))
} // namespace app::classes::OriFlyBackToPlayerAction
