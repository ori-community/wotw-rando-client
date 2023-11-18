#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Blend2DTriangleState.h>
#include <Modloader/app/structs/BlendAnimation2D_Input__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Triangle.h>

namespace app::classes::Moon::Blend2DTriangleState {
    IL2CPP_REGISTER_METHOD(0x01B05E00, void, ctor, (app::Blend2DTriangleState * this_ptr, app::Triangle* triangle, app::BlendAnimation2D_Input__Array* inputs))
    IL2CPP_REGISTER_METHOD(0x01B065F0, app::String*, ToString, (app::Blend2DTriangleState * this_ptr))
} // namespace app::classes::Moon::Blend2DTriangleState
