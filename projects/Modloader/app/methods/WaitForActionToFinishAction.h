#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/WaitForActionToFinishAction.h>

namespace app::classes::WaitForActionToFinishAction {
    IL2CPP_REGISTER_METHOD(0x008C5A90, bool, get_IsPerforming, app::WaitForActionToFinishAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlocking, app::WaitForActionToFinishAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Perform, app::WaitForActionToFinishAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, app::WaitForActionToFinishAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::WaitForActionToFinishAction* this_ptr)
} // namespace app::classes::WaitForActionToFinishAction
