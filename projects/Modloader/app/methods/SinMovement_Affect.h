#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SinMovement.h>
#include <Modloader/app/structs/SinMovement_Affect.h>

namespace app::classes::SinMovement_Affect {
    IL2CPP_REGISTER_METHOD(0x0074A430, void, Start, app::SinMovement_Affect* this_ptr, app::SinMovement* sin_movement)
    IL2CPP_REGISTER_METHOD(0x0074A670, void, Apply, app::SinMovement_Affect* this_ptr, app::SinMovement* sin_movement, float time)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SinMovement_Affect* this_ptr)
} // namespace app::classes::SinMovement_Affect
