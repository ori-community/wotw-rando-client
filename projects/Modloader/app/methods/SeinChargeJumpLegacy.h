#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinChargeJumpLegacy.h>
#include <Modloader/app/structs/PlayerAbilities.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/SeinChargeJump.h>
#include <Modloader/app/structs/CharacterUpwardsDeceleration.h>
#include <Modloader/app/structs/SeinChargeJumpLegacy_State__Enum.h>
#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/Archive.h>

namespace app::classes::SeinChargeJumpLegacy {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinChargeJumpLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A50B70, app::PlayerAbilities*, get_PlayerAbilities, (app::SeinChargeJumpLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, (app::SeinChargeJumpLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A50B90, app::SeinChargeJump*, get_ChargeJump, (app::SeinChargeJumpLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A52480, app::CharacterUpwardsDeceleration*, get_UpwardsDeceleration, (app::SeinChargeJumpLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A524B0, void, OnDoubleJump, (app::SeinChargeJumpLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A52500, void, UpdateCharacterState, (app::SeinChargeJumpLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A52570, void, ChangeState, (app::SeinChargeJumpLegacy * this_ptr, app::SeinChargeJumpLegacy_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x00A52660, void, UpdateState, (app::SeinChargeJumpLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A52F60, bool, get_CanChargeJump, (app::SeinChargeJumpLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A53000, void, PerformChargeJump, (app::SeinChargeJumpLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A535C0, bool, ShouldChargeJumpAnimationKeepPlaying, (app::SeinChargeJumpLegacy * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04731AE8, SeinChargeJumpLegacy_ShouldChargeJumpAnimationKeepPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A536F0, void, add_OnJumpEvent, (app::SeinChargeJumpLegacy * this_ptr, app::Action_1_Single_* value))
    IL2CPP_REGISTER_METHOD(0x00A537E0, void, remove_OnJumpEvent, (app::SeinChargeJumpLegacy * this_ptr, app::Action_1_Single_* value))
    IL2CPP_REGISTER_METHOD(0x00A538D0, void, OnSetReferenceToSein, (app::SeinChargeJumpLegacy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A53900, void, Serialize, (app::SeinChargeJumpLegacy * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x00A53940, void, ctor, (app::SeinChargeJumpLegacy * this_ptr))
} // namespace app::classes::SeinChargeJumpLegacy
