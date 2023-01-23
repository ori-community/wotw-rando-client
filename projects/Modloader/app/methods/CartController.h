#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CartController.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/IPressurePlate.h>

namespace app::classes::CartController {
    IL2CPP_REGISTER_METHOD(0x00738690, float, get_ControllerExtraSpeed, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_ControllerExtraSpeed, (app::CartController * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00B33940, bool, get_InputLocked, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B339F0, float, get_NormalizedBrakeTime, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B33A30, bool, get_CanBrake, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B33AC0, bool, get_IsBraking, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B33AD0, bool, get_CanMove, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Transform*, get_Transform, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A20A00, bool, get_IsSuspended, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B11500, void, set_IsSuspended, (app::CartController * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00736620, app::SuspendableMask__Enum, get_Mask, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B33B90, void, set_Mask, (app::CartController * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00B33C50, void, Awake, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B33E60, void, OnDestroy, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B33F20, void, Start, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B33F80, void, FixedUpdate, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B34050, void, ProvideComponents, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B34130, void, HandleMoving, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B341F0, float, GetMoveInput, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B34260, float, CalculateSpeedFromHeight, (app::CartController * this_ptr, float height))
    IL2CPP_REGISTER_METHOD(0x00B34380, void, HandleInput, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04707740, CartController_HandleInput__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B34DE0, void, HandleCustomInputAcceleration, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B34F50, void, HandleTriggersAcceleration, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B351D0, void, HandleFulRangeAnalogStickAcceleration, (app::CartController * this_ptr, float axis_magnitude))
    IL2CPP_REGISTER_METHOD(0x00B35460, void, HandleLeftRightAnalogStickAcceleration, (app::CartController * this_ptr, float axis_magnitude))
    IL2CPP_REGISTER_METHOD(0x00B35880, void, HandleAutoForwardLean, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B35A30, void, HandleOffscreenIssue, (app::CartController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0090CE60, void, Serialize, (app::CartController * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x002FBCB0, void, ICanActivatePressurePlate_OnPressed, (app::CartController * this_ptr, app::IPressurePlate* plate))
    IL2CPP_REGISTER_METHOD(0x00B35B90, void, ICanActivatePressurePlate_OnReleased, (app::CartController * this_ptr, app::IPressurePlate* plate))
    IL2CPP_REGISTER_METHOD(0x00B35BA0, void, ctor, (app::CartController * this_ptr))
} // namespace app::classes::CartController
