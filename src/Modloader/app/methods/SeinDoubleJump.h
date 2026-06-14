#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/SeinDoubleJump.h>
#include <Modloader/app/structs/SeinDoubleJumpPuppet.h>
#include <Modloader/app/structs/SeinJump.h>

namespace app::classes::SeinDoubleJump {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC7360, int32_t, get_ExtraJumpsAvailable, )
    IL2CPP_REGISTER_METHOD(0x00AC74B0, app::SeinDoubleJumpPuppet*, get_Puppet, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC7570, bool, IsDoubleJumping, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AB1790, app::SeinJump*, get_Jump, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06F0, app::CharacterLeftRightMovement*, get_LeftRightMovement, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC7650, bool, get_CanDoubleJump, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC76D0, bool, get_CanTurnPlay, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC7710, void, OnSetReferenceToSein, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC77E0, void, Serialize, app::SeinDoubleJump* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00AC7850, void, Start, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC7A00, void, OnDestroy, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC7BC0, void, OnResetAirLimits, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC7BD0, bool, get_CanCancel, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC7C90, void, PerformDoubleJump, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC8A50, void, OnPreTurningHandlerTurn, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC8C40, void, OnStoppedDoubleJumpAnimation, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC8CD0, bool, ShouldDoubleJumpAnimationKeepPlaying, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC8D50, void, UpdateCharacterState, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC91D0, void, ResetDoubleJump, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC9270, void, SetDoubleJump, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC9310, void, LockForDuration, app::SeinDoubleJump* this_ptr, float duration)
    IL2CPP_REGISTER_METHOD(0x00AC93D0, void, ResetLock, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC93E0, void, add_OnDoubleJumpEvent, app::Action_1_Single_* value)
    IL2CPP_REGISTER_METHOD(0x00AC9520, void, remove_OnDoubleJumpEvent, app::Action_1_Single_* value)
    IL2CPP_REGISTER_METHOD(0x00AC9660, void, ctor, app::SeinDoubleJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AC9680, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x00AC9810, void, _PerformDoubleJump_b__35_0, app::SeinDoubleJump* this_ptr)
} // namespace app::classes::SeinDoubleJump
