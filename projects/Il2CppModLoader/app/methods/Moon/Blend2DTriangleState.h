#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Blend2DTriangleState {
    IL2CPP_REGISTER_METHOD(0x01B05E00, void, ctor, (app::Blend2DTriangleState * this_ptr, app::Triangle * triangle, app::BlendAnimation2D_Input__Array * inputs))
    IL2CPP_REGISTER_METHOD(0x01B065F0, app::String *, ToString, (app::Blend2DTriangleState * this_ptr))
}
