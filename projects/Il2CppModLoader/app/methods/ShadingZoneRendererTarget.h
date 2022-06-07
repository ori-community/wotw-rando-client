#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ShadingZoneRendererTarget {
    IL2CPP_REGISTER_METHOD(0x005A8FE0, void, ctor, (app::ShadingZoneRendererTarget * this_ptr, app::Renderer * renderer))
    IL2CPP_REGISTER_METHOD(0x005A9220, void, Unregister, (app::ShadingZoneRendererTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A9310, app::Vector3, get_PointForLightCanvasShadingZone, (app::ShadingZoneRendererTarget * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Renderer *, get_RendererForMoonShadingZone, (app::ShadingZoneRendererTarget * this_ptr))
}
