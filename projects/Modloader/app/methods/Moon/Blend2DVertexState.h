#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Blend2DVertexState.h>
#include <Modloader/app/structs/Blend2DVertex_1_BlendAnimation2D_Input_.h>

namespace app::classes::Moon::Blend2DVertexState {
    IL2CPP_REGISTER_METHOD(0x01B06AA0, void, ctor, app::Blend2DVertexState* this_ptr, int32_t input_index, app::Blend2DVertex_1_BlendAnimation2D_Input_* vertex)
}
