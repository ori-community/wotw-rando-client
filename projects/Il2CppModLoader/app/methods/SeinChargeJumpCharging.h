#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinChargeJumpCharging {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A50B70, app::PlayerAbilities *, get_PlayerAbilities, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement *, get_PlatformMovement, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A50B90, app::SeinChargeJump *, get_ChargeJump, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A50BD0, void, UpdateCharacterState, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A50C40, void, EndCharge, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A50E80, void, OnExit, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A50EA0, void, ChangeState, (app::SeinChargeJumpCharging * this_ptr, app::SeinChargeJumpCharging_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00A51C10, bool, get_IsWallCharging, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A51DC0, bool, get_IsGroundCharging, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A51F60, void, UpdateState, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A52340, bool, get_IsStatePerforming, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A52340, bool, get_IsCharging, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A52350, bool, get_IsCharged, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A52360, float, get_ChargingValue, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A52380, void, OnSetReferenceToSein, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A52450, void, ctor, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A52470, void, _ChangeState_b__18_0, (app::SeinChargeJumpCharging * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04785570, SeinChargeJumpCharging__ChangeState_b__18_0__MethodInfo)
}
