#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IsLoadingInProgressCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::IsLoadingInProgressCondition {
    IL2CPP_REGISTER_METHOD(0x00646940, bool, Validate, (app::IsLoadingInProgressCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsLoadingInProgressCondition * this_ptr))
} // namespace app::classes::IsLoadingInProgressCondition
