#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LightningController {
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_InvalidateParentTimelineCache, (app::LightningController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_InvalidateParentTimelineCache, (app::LightningController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00FA35B0, void, Start, (app::LightningController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA35F0, void, FixedUpdate, (app::LightningController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA3690, void, InitiateLightningEvent, (app::LightningController * this_ptr, app::LightningController_LightningEvent lightning_event))
    IL2CPP_REGISTER_METHOD(0x00FA3B00, float, GetRandomValue, (app::LightningController * this_ptr, app::FloatRange_1 range))
    IL2CPP_REGISTER_METHOD(0x00FA3C00, app::LightningController_LightningEvent, GetNextLightningEvent, (app::LightningController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA3FC0, void, ctor, (app::LightningController * this_ptr))
} // namespace app::classes::LightningController
