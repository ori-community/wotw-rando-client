#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterleavedRenderingSettings_PerSlice.h>

namespace app::classes::Moon::Rendering::InterleavedRenderingSettings_PerSlice {
    IL2CPP_REGISTER_METHOD(0x0078D9A0, void, ctor, (app::InterleavedRenderingSettings_PerSlice * this_ptr, float scale))
}
