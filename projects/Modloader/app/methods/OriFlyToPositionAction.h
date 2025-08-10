#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/OriFlyToPositionAction.h>

namespace app::classes::OriFlyToPositionAction {
    IL2CPP_REGISTER_METHOD(0x0043BBA0, void, Perform, app::OriFlyToPositionAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0043C050, void, Stop, app::OriFlyToPositionAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043C0A0, bool, get_IsPerforming, app::OriFlyToPositionAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043C0F0, float, get_Duration, app::OriFlyToPositionAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043C100, void, set_Duration, app::OriFlyToPositionAction* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0043C110, void, ctor, app::OriFlyToPositionAction* this_ptr)
} // namespace app::classes::OriFlyToPositionAction
