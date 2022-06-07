#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WaterCurrentController {
    IL2CPP_REGISTER_METHOD(0x008D3BB0, app::WaterCurrentController *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x008D3C30, app::Vector2, get_CurrentDirection, (app::WaterCurrentController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D3D20, void, Awake, (app::WaterCurrentController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D3E20, void, FixedUpdate, (app::WaterCurrentController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04781228, WaterCurrentController_FixedUpdate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008D4500, float, get_CurrentForceMultiplierForSein, (app::WaterCurrentController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D46F0, bool, get_ShouldApplyWaterCurrent, (app::WaterCurrentController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D4700, void, ChangeState, (app::WaterCurrentController * this_ptr, app::WaterCurrentController_State__Enum new_state))
    IL2CPP_REGISTER_METHODINFO(0x047271A0, WaterCurrentController_ChangeState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008D4800, bool, get_SeinInWaterCurrent, (app::WaterCurrentController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D4970, bool, PointInsideWaterCurrent, (app::WaterCurrentController * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x008D4B50, app::Vector2, VelocityAtPoint, (app::WaterCurrentController * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WaterCurrentController * this_ptr))
}
