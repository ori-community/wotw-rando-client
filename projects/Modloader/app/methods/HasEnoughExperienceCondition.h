#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HasEnoughExperienceCondition {
    IL2CPP_REGISTER_METHOD(0x0109E710, bool, Validate, (app::HasEnoughExperienceCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HasEnoughExperienceCondition * this_ptr))
} // namespace app::classes::HasEnoughExperienceCondition
