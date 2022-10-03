#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinWorldStateCondition {
    IL2CPP_REGISTER_METHOD(0x00AB55E0, bool, Validate, (app::SeinWorldStateCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00AB5740, void, ctor, (app::SeinWorldStateCondition * this_ptr))
} // namespace app::classes::SeinWorldStateCondition
