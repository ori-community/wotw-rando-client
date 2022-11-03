#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GenericSpring2D {
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_Distance, (app::GenericSpring2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724010, void, set_Distance, (app::GenericSpring2D * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00E10CB0, void, Step, (app::GenericSpring2D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E11740, void, ctor, (app::GenericSpring2D * this_ptr))
} // namespace app::classes::GenericSpring2D
