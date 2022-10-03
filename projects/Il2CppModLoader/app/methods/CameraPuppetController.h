#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraPuppetController {
    IL2CPP_REGISTER_METHOD(0x016A1240, float, get_DebugOverrideFOV, ())
    IL2CPP_REGISTER_METHOD(0x016A12E0, void, set_DebugOverrideFOV, (float value))
    IL2CPP_REGISTER_METHOD(0x016A1390, void, Awake, (app::CameraPuppetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A1590, void, OnDestroy, (app::CameraPuppetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A1720, void, OnGameReset, (app::CameraPuppetController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047363C0, CameraPuppetController_OnGameReset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016A1740, void, Reset, (app::CameraPuppetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F5E0, void, SetTween, (app::CameraPuppetController * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x01045ED0, void, SetWideScreenHorizontalPanStrength, (app::CameraPuppetController * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x008A34D0, void, SetWideScreenVerticalPanStrength, (app::CameraPuppetController * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x00C1ABF0, void, SetWideScreenZoomStrength, (app::CameraPuppetController * this_ptr, float amount))
    IL2CPP_REGISTER_METHOD(0x016A1750, void, ClearWideScreenAdjustments, (app::CameraPuppetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, SetCinematicPuppet, (app::CameraPuppetController * this_ptr, app::Transform* cinematic_puppet))
    IL2CPP_REGISTER_METHOD(0x016A1760, void, UpdatePuppet, (app::CameraPuppetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A2230, float, GetCurrentSceneFov, (app::CameraPuppetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CameraPuppetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A2400, void, cctor, ())
} // namespace app::classes::CameraPuppetController
