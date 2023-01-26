#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Blend2DTriangulationState.h>
#include <Modloader/app/structs/BlendAnimation2D_Input__Array.h>
#include <Modloader/app/structs/IMesh.h>

namespace app::classes::Moon::Blend2DTriangulationState {
    IL2CPP_REGISTER_METHOD(0x01B066D0, void, ctor, (app::Blend2DTriangulationState * this_ptr, app::IMesh* triangulated_mesh, app::BlendAnimation2D_Input__Array* inputs))
}
