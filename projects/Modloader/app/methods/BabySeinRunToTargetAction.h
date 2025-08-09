#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BabySeinRunToTargetAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::BabySeinRunToTargetAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, app::BabySeinRunToTargetAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_IsPerforming, app::BabySeinRunToTargetAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F76CC0, void, Perform_1, app::BabySeinRunToTargetAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00F76EC0, app::IEnumerator*, Perform_2, app::BabySeinRunToTargetAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::BabySeinRunToTargetAction* this_ptr)
} // namespace app::classes::BabySeinRunToTargetAction
