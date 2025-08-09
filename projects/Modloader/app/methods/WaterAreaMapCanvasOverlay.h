#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaterAreaMapCanvasOverlay.h>

namespace app::classes::WaterAreaMapCanvasOverlay {
    IL2CPP_REGISTER_METHOD(0x008D3A50, void, OnEnable, app::WaterAreaMapCanvasOverlay* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::WaterAreaMapCanvasOverlay* this_ptr)
} // namespace app::classes::WaterAreaMapCanvasOverlay
