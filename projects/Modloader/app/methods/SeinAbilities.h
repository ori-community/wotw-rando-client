#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinAbilities.h>
#include <Modloader/app/structs/SeinBashAttack.h>
#include <Modloader/app/structs/SeinBounceAbility.h>
#include <Modloader/app/structs/SeinBowAttack.h>
#include <Modloader/app/structs/SeinCarry.h>
#include <Modloader/app/structs/SeinChargeFlameAbility.h>
#include <Modloader/app/structs/SeinChargeJump.h>
#include <Modloader/app/structs/SeinChargeJumpCharging.h>
#include <Modloader/app/structs/SeinCinematic.h>
#include <Modloader/app/structs/SeinCinematicToGameplay.h>
#include <Modloader/app/structs/SeinComboHandler.h>
#include <Modloader/app/structs/SeinCrouch.h>
#include <Modloader/app/structs/SeinDashAttack.h>
#include <Modloader/app/structs/SeinDashNew.h>
#include <Modloader/app/structs/SeinDigging.h>
#include <Modloader/app/structs/SeinDoubleJump.h>
#include <Modloader/app/structs/SeinEdgeClamber.h>
#include <Modloader/app/structs/SeinFall.h>
#include <Modloader/app/structs/SeinFeatherFlap.h>
#include <Modloader/app/structs/SeinFootsteps.h>
#include <Modloader/app/structs/SeinGlide.h>
#include <Modloader/app/structs/SeinGoldenSeinAbility.h>
#include <Modloader/app/structs/SeinGrabBlock.h>
#include <Modloader/app/structs/SeinGrabRope.h>
#include <Modloader/app/structs/SeinGrabSurface.h>
#include <Modloader/app/structs/SeinGrabWall.h>
#include <Modloader/app/structs/SeinGrenadeAttack.h>
#include <Modloader/app/structs/SeinHeavySpiritSlash.h>
#include <Modloader/app/structs/SeinHold.h>
#include <Modloader/app/structs/SeinIceSpiritFlame.h>
#include <Modloader/app/structs/SeinIdle.h>
#include <Modloader/app/structs/SeinInteraction.h>
#include <Modloader/app/structs/SeinInvincibility.h>
#include <Modloader/app/structs/SeinJump.h>
#include <Modloader/app/structs/SeinLaunch.h>
#include <Modloader/app/structs/SeinLeached.h>
#include <Modloader/app/structs/SeinLever.h>
#include <Modloader/app/structs/SeinLookUp.h>
#include <Modloader/app/structs/SeinMeleeAttack.h>
#include <Modloader/app/structs/SeinPinned.h>
#include <Modloader/app/structs/SeinPushAgainstWall.h>
#include <Modloader/app/structs/SeinRide.h>
#include <Modloader/app/structs/SeinRun.h>
#include <Modloader/app/structs/SeinSpiritFlameAbility.h>
#include <Modloader/app/structs/SeinSpiritFlameTargetting.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility.h>
#include <Modloader/app/structs/SeinSpiritMagnet.h>
#include <Modloader/app/structs/SeinSpiritSlash.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell.h>
#include <Modloader/app/structs/SeinStandardSpiritFlameAbility.h>
#include <Modloader/app/structs/SeinStandingOnEdge.h>
#include <Modloader/app/structs/SeinStomp.h>
#include <Modloader/app/structs/SeinSwimming.h>
#include <Modloader/app/structs/SeinTeleportSpell.h>
#include <Modloader/app/structs/SeinWallChargeJump.h>
#include <Modloader/app/structs/SeinWallJump.h>
#include <Modloader/app/structs/SeinWallSlide.h>

namespace app::classes::SeinAbilities {
    IL2CPP_REGISTER_METHOD(0x004173F0, app::SeinDoubleJump*, get_DoubleJump, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01072410, void, set_DoubleJump, app::SeinAbilities* this_ptr, app::SeinDoubleJump* value)
    IL2CPP_REGISTER_METHOD(0x005E0120, app::SeinJump*, get_Jump, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010724C0, void, set_Jump, app::SeinAbilities* this_ptr, app::SeinJump* value)
    IL2CPP_REGISTER_METHOD(0x005E01F0, app::SeinWallJump*, get_WallJump, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01072570, void, set_WallJump, app::SeinAbilities* this_ptr, app::SeinWallJump* value)
    IL2CPP_REGISTER_METHOD(0x005E02C0, app::SeinChargeJumpCharging*, get_ChargeJumpCharging, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01072620, void, set_ChargeJumpCharging, app::SeinAbilities* this_ptr, app::SeinChargeJumpCharging* value)
    IL2CPP_REGISTER_METHOD(0x005E0390, app::SeinChargeJump*, get_ChargeJump, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010726D0, void, set_ChargeJump, app::SeinAbilities* this_ptr, app::SeinChargeJump* value)
    IL2CPP_REGISTER_METHOD(0x005E0460, app::SeinWallChargeJump*, get_WallChargeJump, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01072780, void, set_WallChargeJump, app::SeinAbilities* this_ptr, app::SeinWallChargeJump* value)
    IL2CPP_REGISTER_METHOD(0x005E0530, app::SeinStomp*, get_Stomp, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01072830, void, set_Stomp, app::SeinAbilities* this_ptr, app::SeinStomp* value)
    IL2CPP_REGISTER_METHOD(0x005E0600, app::SeinGlide*, get_Glide, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010728E0, void, set_Glide, app::SeinAbilities* this_ptr, app::SeinGlide* value)
    IL2CPP_REGISTER_METHOD(0x005E06D0, app::SeinFeatherFlap*, get_FeatherFlap, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01072990, void, set_FeatherFlap, app::SeinAbilities* this_ptr, app::SeinFeatherFlap* value)
    IL2CPP_REGISTER_METHOD(0x005E07A0, app::SeinGrabBlock*, get_GrabBlock, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01072A40, void, set_GrabBlock, app::SeinAbilities* this_ptr, app::SeinGrabBlock* value)
    IL2CPP_REGISTER_METHOD(0x01072AF0, app::SeinCrouch*, get_Crouch, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01072B10, void, set_Crouch, app::SeinAbilities* this_ptr, app::SeinCrouch* value)
    IL2CPP_REGISTER_METHOD(0x01072BC0, app::SeinGrabWall*, get_GrabWall, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01072BE0, void, set_GrabWall, app::SeinAbilities* this_ptr, app::SeinGrabWall* value)
    IL2CPP_REGISTER_METHOD(0x01072C90, app::SeinWallSlide*, get_WallSlide, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01072CB0, void, set_WallSlide, app::SeinAbilities* this_ptr, app::SeinWallSlide* value)
    IL2CPP_REGISTER_METHOD(0x01072D60, app::SeinGrabRope*, get_GrabRope, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01072D80, void, set_GrabRope, app::SeinAbilities* this_ptr, app::SeinGrabRope* value)
    IL2CPP_REGISTER_METHOD(0x01072E30, app::SeinEdgeClamber*, get_EdgeClamber, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01072E50, void, set_EdgeClamber, app::SeinAbilities* this_ptr, app::SeinEdgeClamber* value)
    IL2CPP_REGISTER_METHOD(0x01072F10, app::SeinSwimming*, get_Swimming, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01072F30, void, set_Swimming, app::SeinAbilities* this_ptr, app::SeinSwimming* value)
    IL2CPP_REGISTER_METHOD(0x01072FF0, app::SeinDigging*, get_Digging, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01073010, void, set_Digging, app::SeinAbilities* this_ptr, app::SeinDigging* value)
    IL2CPP_REGISTER_METHOD(0x010730D0, app::SeinDashNew*, get_DashNew, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010730F0, void, set_DashNew, app::SeinAbilities* this_ptr, app::SeinDashNew* value)
    IL2CPP_REGISTER_METHOD(0x010731B0, app::SeinGoldenSeinAbility*, get_GoldenSein, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010731D0, void, set_GoldenSein, app::SeinAbilities* this_ptr, app::SeinGoldenSeinAbility* value)
    IL2CPP_REGISTER_METHOD(0x01073290, app::SeinFall*, get_Fall, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010732B0, void, set_Fall, app::SeinAbilities* this_ptr, app::SeinFall* value)
    IL2CPP_REGISTER_METHOD(0x01073370, app::SeinRun*, get_Run, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01073390, void, set_Run, app::SeinAbilities* this_ptr, app::SeinRun* value)
    IL2CPP_REGISTER_METHOD(0x01073450, app::SeinIdle*, get_Idle, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01073470, void, set_Idle, app::SeinAbilities* this_ptr, app::SeinIdle* value)
    IL2CPP_REGISTER_METHOD(0x01073530, app::SeinLookUp*, get_LookUp, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01073550, void, set_LookUp, app::SeinAbilities* this_ptr, app::SeinLookUp* value)
    IL2CPP_REGISTER_METHOD(0x01073610, app::SeinBashAttack*, get_Bash, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01073630, void, set_Bash, app::SeinAbilities* this_ptr, app::SeinBashAttack* value)
    IL2CPP_REGISTER_METHOD(0x010736F0, app::SeinSpiritFlameAbility*, get_SpiritFlame, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01073710, void, set_SpiritFlame, app::SeinAbilities* this_ptr, app::SeinSpiritFlameAbility* value)
    IL2CPP_REGISTER_METHOD(0x010737D0, app::SeinStandardSpiritFlameAbility*, get_StandardSpiritFlame, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010737F0, void, set_StandardSpiritFlame, app::SeinAbilities* this_ptr, app::SeinStandardSpiritFlameAbility* value)
    IL2CPP_REGISTER_METHOD(0x010738B0, app::SeinCarry*, get_Carry, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010738D0, void, set_Carry, app::SeinAbilities* this_ptr, app::SeinCarry* value)
    IL2CPP_REGISTER_METHOD(0x01073990, app::SeinHold*, get_Hold, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010739B0, void, set_Hold, app::SeinAbilities* this_ptr, app::SeinHold* value)
    IL2CPP_REGISTER_METHOD(0x01073A70, app::SeinInvincibility*, get_Invincibility, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01073A90, void, set_Invincibility, app::SeinAbilities* this_ptr, app::SeinInvincibility* value)
    IL2CPP_REGISTER_METHOD(0x01073B50, app::SeinPushAgainstWall*, get_PushAgainstWall, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01073B70, void, set_PushAgainstWall, app::SeinAbilities* this_ptr, app::SeinPushAgainstWall* value)
    IL2CPP_REGISTER_METHOD(0x01073C30, app::SeinStandingOnEdge*, get_StandingOnEdge, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01073C50, void, set_StandingOnEdge, app::SeinAbilities* this_ptr, app::SeinStandingOnEdge* value)
    IL2CPP_REGISTER_METHOD(0x01073D10, app::SeinLever*, get_Lever, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01073D30, void, set_Lever, app::SeinAbilities* this_ptr, app::SeinLever* value)
    IL2CPP_REGISTER_METHOD(0x01073DF0, app::SeinFootsteps*, get_Footsteps, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01073E10, void, set_Footsteps, app::SeinAbilities* this_ptr, app::SeinFootsteps* value)
    IL2CPP_REGISTER_METHOD(0x01073ED0, app::SeinInteraction*, get_Interaction, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01073EF0, void, set_Interaction, app::SeinAbilities* this_ptr, app::SeinInteraction* value)
    IL2CPP_REGISTER_METHOD(0x01073FB0, app::SeinCinematic*, get_Cinematic, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01073FD0, void, set_Cinematic, app::SeinAbilities* this_ptr, app::SeinCinematic* value)
    IL2CPP_REGISTER_METHOD(0x01074090, app::SeinCinematicToGameplay*, get_CinematicToGameplay, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010740B0, void, set_CinematicToGameplay, app::SeinAbilities* this_ptr, app::SeinCinematicToGameplay* value)
    IL2CPP_REGISTER_METHOD(0x01074170, app::SeinSpiritFlameTargetting*, get_SpiritFlameTargetting, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01074190, void, set_SpiritFlameTargetting, app::SeinAbilities* this_ptr, app::SeinSpiritFlameTargetting* value)
    IL2CPP_REGISTER_METHOD(0x01074250, app::SeinChargeFlameAbility*, get_ChargeFlame, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01074270, void, set_ChargeFlame, app::SeinAbilities* this_ptr, app::SeinChargeFlameAbility* value)
    IL2CPP_REGISTER_METHOD(0x01074330, app::SeinIceSpiritFlame*, get_IceSpiritFlame, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01074350, void, set_IceSpiritFlame, app::SeinAbilities* this_ptr, app::SeinIceSpiritFlame* value)
    IL2CPP_REGISTER_METHOD(0x01074410, app::SeinDashAttack*, get_Dash, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01074430, void, set_Dash, app::SeinAbilities* this_ptr, app::SeinDashAttack* value)
    IL2CPP_REGISTER_METHOD(0x010744F0, app::SeinGrenadeAttack*, get_Grenade, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01074510, void, set_Grenade, app::SeinAbilities* this_ptr, app::SeinGrenadeAttack* value)
    IL2CPP_REGISTER_METHOD(0x010745D0, app::SeinTeleportSpell*, get_Teleport, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010745F0, void, set_Teleport, app::SeinAbilities* this_ptr, app::SeinTeleportSpell* value)
    IL2CPP_REGISTER_METHOD(0x010746B0, app::SeinBounceAbility*, get_Bounce, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010746D0, void, set_Bounce, app::SeinAbilities* this_ptr, app::SeinBounceAbility* value)
    IL2CPP_REGISTER_METHOD(0x01074790, app::SeinSpiritLeashAbility*, get_SpiritLeash, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010747B0, void, set_SpiritLeash, app::SeinAbilities* this_ptr, app::SeinSpiritLeashAbility* value)
    IL2CPP_REGISTER_METHOD(0x01074870, app::SeinSpiritSlash*, get_SpiritSlash, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01074890, void, set_SpiritSlash, app::SeinAbilities* this_ptr, app::SeinSpiritSlash* value)
    IL2CPP_REGISTER_METHOD(0x01074950, app::SeinHeavySpiritSlash*, get_HeavySpiritSlash, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01074970, void, set_HeavySpiritSlash, app::SeinAbilities* this_ptr, app::SeinHeavySpiritSlash* value)
    IL2CPP_REGISTER_METHOD(0x01074A30, app::SeinBowAttack*, get_Bow, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01074A50, void, set_Bow, app::SeinAbilities* this_ptr, app::SeinBowAttack* value)
    IL2CPP_REGISTER_METHOD(0x01074B10, app::SeinMeleeAttack*, get_Melee, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01074B30, void, set_Melee, app::SeinAbilities* this_ptr, app::SeinMeleeAttack* value)
    IL2CPP_REGISTER_METHOD(0x01074BF0, app::SeinGrabSurface*, get_GrabSurface, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01074C10, void, set_GrabSurface, app::SeinAbilities* this_ptr, app::SeinGrabSurface* value)
    IL2CPP_REGISTER_METHOD(0x01074CD0, app::SeinPinned*, get_Pinned, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01074CF0, void, set_Pinned, app::SeinAbilities* this_ptr, app::SeinPinned* value)
    IL2CPP_REGISTER_METHOD(0x01074DB0, app::SeinLeached*, get_Leached, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01074DD0, void, set_Leached, app::SeinAbilities* this_ptr, app::SeinLeached* value)
    IL2CPP_REGISTER_METHOD(0x01074E90, app::SeinRide*, get_Ride, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01074EB0, void, set_Ride, app::SeinAbilities* this_ptr, app::SeinRide* value)
    IL2CPP_REGISTER_METHOD(0x01074F70, app::SeinLaunch*, get_Launch, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01074F90, void, set_Launch, app::SeinAbilities* this_ptr, app::SeinLaunch* value)
    IL2CPP_REGISTER_METHOD(0x01075050, app::SeinComboHandler*, get_Combo, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01075070, void, set_Combo, app::SeinAbilities* this_ptr, app::SeinComboHandler* value)
    IL2CPP_REGISTER_METHOD(0x01075130, app::SeinSpiritMagnet*, get_SpiritMagnet, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01075150, void, set_SpiritMagnet, app::SeinAbilities* this_ptr, app::SeinSpiritMagnet* value)
    IL2CPP_REGISTER_METHOD(0x01075210, app::SeinSpiritSpearSpell*, get_SpiritSpear, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01075230, void, set_SpiritSpear, app::SeinAbilities* this_ptr, app::SeinSpiritSpearSpell* value)
    IL2CPP_REGISTER_METHOD(0x010752F0, void, RefreshStateCache, app::SeinAbilities* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01075A80, void, ctor, app::SeinAbilities* this_ptr)
} // namespace app::classes::SeinAbilities
