#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberShaderRenderQueue {
    IL2CPP_REGISTER_METHOD(0x0191B0B0, double, GetUberComponentZ, (app::UberShaderComponent * component))
    IL2CPP_REGISTER_METHOD(0x0191B460, int32_t, RenderlayerFromZ, (double z))
    IL2CPP_REGISTER_METHOD(0x0191B7E0, void, SetQeueusFromZ, (double z, app::Renderer* renderer, bool in_z_ranges))
    IL2CPP_REGISTER_METHOD(0x0191BD80, void, SetRenderQueueExplicit_1, (app::GameObject * go, float z))
    IL2CPP_REGISTER_METHOD(0x0191BE50, void, SetRenderQueueExplicit_2, (app::Renderer * renderer, float z))
    IL2CPP_REGISTER_METHOD(0x0191C5F0, void, cctor, ())
} // namespace app::classes::UberShaderRenderQueue
