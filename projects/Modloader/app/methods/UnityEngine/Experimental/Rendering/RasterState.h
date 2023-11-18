#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RasterState__Boxed.h>
#include <Modloader/app/structs/CullMode__Enum.h>

namespace app::classes::UnityEngine::Experimental::Rendering::RasterState {
    IL2CPP_REGISTER_METHOD(0x001EC7D0, void, ctor, (app::RasterState__Boxed * this_ptr, app::CullMode__Enum culling_mode, int32_t offset_units, float offset_factor, bool depth_clip))
    IL2CPP_REGISTER_METHOD(0x024345D0, void, cctor, ())
} // namespace app::classes::UnityEngine::Experimental::Rendering::RasterState
