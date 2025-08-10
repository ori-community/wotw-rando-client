#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CartLogicCycle.h>
#include <Modloader/app/structs/CartLogicCycle_IsAllowedDelegate.h>
#include <Modloader/app/structs/CharacterState.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::CartLogicCycle {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowGravity, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowGravityToGround, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, get_AllowInstantStop, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, get_AllowLeftRightMovement, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, get_AllowJumpSustain, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, get_AllowUpwardsDeceleration, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowAirNoDeceleration, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyFrictionToSpeed, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, get_AllowJump, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A420, bool, get_AllowBoost, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A480, void, RegisterCharacterState, app::CartLogicCycle* this_ptr, app::CharacterState* state)
    IL2CPP_REGISTER_METHOD(0x00B3A6C0, void, UnregisterCharacterState, app::CartLogicCycle* this_ptr, app::CharacterState* state)
    IL2CPP_REGISTER_METHOD(0x00B3A800, void, RegisterExecutionOrder, app::CartLogicCycle* this_ptr, app::Type* type, int32_t order)
    IL2CPP_REGISTER_METHOD(0x00B3A920, void, RegisterDefaultExecutionOrder, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00B3AB00,
        void,
        RegisterIsAllowedDelegate,
        app::CartLogicCycle* this_ptr,
        app::Type* type,
        app::CartLogicCycle_IsAllowedDelegate* is_allowed
    )
    IL2CPP_REGISTER_METHOD(0x00B3AC20, void, RegisterIsAllowedDelegates, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3B550, bool, ValidateExclusiveActiveStateType, app::CartLogicCycle* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x00B3B6D0, void, RegisterExclusiveActiveStateType, app::CartLogicCycle* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterExclusiveActiveStateTypes, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3B910, void, Awake, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3B920, void, Start, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3B9B0, void, FixedUpdate, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3C1F0, void, SetStateActive, app::CartLogicCycle* this_ptr, app::CharacterState* state, bool active)
    IL2CPP_REGISTER_METHOD(0x00B3C340, void, UpdateCharacterState, app::CartLogicCycle* this_ptr, app::CharacterState* state)
    IL2CPP_REGISTER_METHOD(0x00B3C450, void, ctor, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, _RegisterIsAllowedDelegates_b__31_0, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, _RegisterIsAllowedDelegates_b__31_1, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, _RegisterIsAllowedDelegates_b__31_2, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, _RegisterIsAllowedDelegates_b__31_3, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, _RegisterIsAllowedDelegates_b__31_4, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, _RegisterIsAllowedDelegates_b__31_5, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, _RegisterIsAllowedDelegates_b__31_6, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A3F0, bool, _RegisterIsAllowedDelegates_b__31_7, app::CartLogicCycle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B3A420, bool, _RegisterIsAllowedDelegates_b__31_8, app::CartLogicCycle* this_ptr)
} // namespace app::classes::CartLogicCycle
