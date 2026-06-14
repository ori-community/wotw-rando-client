#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/SeinRunToTargetAction.h>

namespace app::classes::SeinRunToTargetAction {
    IL2CPP_REGISTER_METHOD(0x005D89B0, void, Stop, app::SeinRunToTargetAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsPerforming, app::SeinRunToTargetAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D8A90, void, Perform_1, app::SeinRunToTargetAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x005D8D30, app::IEnumerator*, Perform_2, app::SeinRunToTargetAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D8E80, void, Exit, app::SeinRunToTargetAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D8F90, void, ctor, app::SeinRunToTargetAction* this_ptr)
} // namespace app::classes::SeinRunToTargetAction
