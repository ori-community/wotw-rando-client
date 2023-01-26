#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonShadingZoneController_TargetData.h>

namespace app::classes::MoonShadingZoneController_TargetData {
    IL2CPP_REGISTER_METHOD(0x009B3690, bool, get_IsInsideZone, (app::MoonShadingZoneController_TargetData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonShadingZoneController_TargetData * this_ptr))
} // namespace app::classes::MoonShadingZoneController_TargetData
