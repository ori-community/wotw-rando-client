#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Kino::Motion {
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_shutterAngle, (app::Motion_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724010, void, set_shutterAngle, (app::Motion_1 * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_sampleCount, (app::Motion_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_sampleCount, (app::Motion_1 * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_frameBlending, (app::Motion_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A5EC0, void, set_frameBlending, (app::Motion_1 * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00E751A0, void, OnEnable, (app::Motion_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E753B0, void, OnDisable, (app::Motion_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E755D0, void, Update, (app::Motion_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E75700, void, OnRenderImage, (app::Motion_1 * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x00E75A20, void, ctor, (app::Motion_1 * this_ptr))
} // namespace app::classes::Kino::Motion
