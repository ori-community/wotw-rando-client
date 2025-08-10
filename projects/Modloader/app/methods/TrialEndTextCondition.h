#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/TrialEndTextCondition.h>

namespace app::classes::TrialEndTextCondition {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, Validate, app::TrialEndTextCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TrialEndTextCondition* this_ptr)
} // namespace app::classes::TrialEndTextCondition
