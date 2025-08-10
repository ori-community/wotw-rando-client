#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterSpriteMirror.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/PlayerAbilities.h>
#include <Modloader/app/structs/SeinWallChargeJump.h>
#include <Modloader/app/structs/SeinWallChargeJump_State__Enum.h>

namespace app::classes::SeinWallChargeJump {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A50B70, app::PlayerAbilities*, get_PlayerAbilities, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AA8590, void, OnDoubleJump, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AA85A0, void, UpdateCharacterState, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFA40, float, get_AngularElevation, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AA8590, void, OnExit, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AA8740, void, Start, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AA88E0, void, OnDestroy, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AA8BA0, void, OnAnimationEnd, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AA8C10, void, OnAnimationStart, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00AA8C80,
        void,
        ModifyGravityPlatformMovementSettings,
        app::SeinWallChargeJump* this_ptr,
        app::GravityPlatformMovementSettings* settings
    )
    IL2CPP_REGISTER_METHOD(0x00AA8CB0, void, ChangeState, app::SeinWallChargeJump* this_ptr, app::SeinWallChargeJump_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x00AA9030, bool, get_IsCharged, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AA9240, bool, get_IsCharging, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AA9450, void, UpdateState, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AA9590, void, UpdateNormalState, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AA9640, void, UpdateJumpingState, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AAA030, void, UpdateAimElevation, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AAA360, void, UpdateAimingState, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AAA5F0, bool, get_CanChargeJump, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AAA6A0, void, OnRestoreCheckpoint, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AAA6B0, void, OnAwake, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D0720, app::CharacterSpriteMirror*, get_CharacterSpriteMirror, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFE20, bool, get_SpriteMirrorLock, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AAA850, void, set_SpriteMirrorLock, app::SeinWallChargeJump* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00AAA910, void, PerformChargeJump, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A535C0, bool, ShouldChargeJumpAnimationKeepPlaying, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AAB1E0, void, OnSetReferenceToSein, app::SeinWallChargeJump* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AAB2B0, void, ctor, app::SeinWallChargeJump* this_ptr)
} // namespace app::classes::SeinWallChargeJump
