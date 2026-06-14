#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AreaMapCanvasOverlay.h>

namespace app::classes::AreaMapCanvasOverlay {
    IL2CPP_REGISTER_METHOD(0x0050B270, void, OnValidate, app::AreaMapCanvasOverlay* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0050B350, void, ApplySize, app::AreaMapCanvasOverlay* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0050B750, void, ApplyMasks, app::AreaMapCanvasOverlay* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0050BBD0, void, ApplyFade, app::AreaMapCanvasOverlay* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::AreaMapCanvasOverlay* this_ptr)
} // namespace app::classes::AreaMapCanvasOverlay
