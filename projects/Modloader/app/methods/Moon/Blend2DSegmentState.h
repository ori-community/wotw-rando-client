#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Blend2DSegmentState.h>
#include <Modloader/app/structs/BlendAnimation2D_Input__Array.h>
#include <Modloader/app/structs/ISegment.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Blend2DSegmentState {
    IL2CPP_REGISTER_METHOD(0x01B058F0, void, ctor, app::Blend2DSegmentState* this_ptr, app::ISegment* segment, app::BlendAnimation2D_Input__Array* inputs)
    IL2CPP_REGISTER_METHOD(0x01B05D20, app::String*, ToString, app::Blend2DSegmentState* this_ptr)
} // namespace app::classes::Moon::Blend2DSegmentState
