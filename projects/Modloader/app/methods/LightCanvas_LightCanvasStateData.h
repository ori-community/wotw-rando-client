#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LightCanvas_LightCanvasStateData.h>
#include <Modloader/app/structs/LightCanvasStateController_LightCanvasState.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::LightCanvas_LightCanvasStateData {
    IL2CPP_REGISTER_METHOD(0x011459B0, int32_t, get_Guid, (app::LightCanvas_LightCanvasStateData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E0390, app::String*, get_Name, (app::LightCanvas_LightCanvasStateData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011459D0, void, ctor, (app::LightCanvas_LightCanvasStateData * this_ptr, app::LightCanvasStateController_LightCanvasState* state_definition))
} // namespace app::classes::LightCanvas_LightCanvasStateData
