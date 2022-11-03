#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraSizeConstraint {
    IL2CPP_REGISTER_METHOD(0x00B1E080, void, Start, (app::CameraSizeConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CameraSizeConstraint * this_ptr))
} // namespace app::classes::CameraSizeConstraint
