#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IEquipableOwner.h>
#include <Modloader/app/structs/List_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TurtleShell.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::TurtleShell {
    IL2CPP_REGISTER_METHOD(0x00720150, app::IEquipableOwner*, get_Owner, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013D8C90, void, set_Owner, app::TurtleShell* this_ptr, app::IEquipableOwner* value)
    IL2CPP_REGISTER_METHOD(0x00D2CDF0, bool, get_IsClaimed, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A8100, void, set_IsClaimed, app::TurtleShell* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0068B8C0, bool, get_IsEquiped, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::List_1_Moon_ISuspendable_*, GetHitStopAutoSuspendables, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013D8CA0, bool, get_IsStandingStill, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013D8E00, void, OnEnable, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013D8F70, void, OnDisable, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013D9130, void, Awake, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013D93B0, void, Start, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013D9610, void, Update, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013D9830, void, Serialize, app::TurtleShell* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x013D98C0, bool, CanBeEquipedBy, app::TurtleShell* this_ptr, app::IEquipableOwner* owner_candidate)
    IL2CPP_REGISTER_METHOD(0x013D99B0, void, Equip, app::TurtleShell* this_ptr, app::IEquipableOwner* owner)
    IL2CPP_REGISTER_METHOD(0x013D9BE0, void, Drop, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DA090, void, StopAllEquipTimelines, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DA270, bool, CanBeClaimedBy, app::TurtleShell* this_ptr, app::IEquipableOwner* owner_candidate)
    IL2CPP_REGISTER_METHOD(0x013DA370, void, Claim, app::TurtleShell* this_ptr, app::IEquipableOwner* owner)
    IL2CPP_REGISTER_METHOD(0x013DA470, void, ReleaseClaim, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DA500, void, EnablePhysics, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DA5D0, void, DisablePhysics, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DA6A0, void, AddForce, app::TurtleShell* this_ptr, app::Vector2 velocity, float angular_velocity)
    IL2CPP_REGISTER_METHOD(0x013DA8E0, void, PlayAttackTimeline, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DA910, void, PlayEquipByTurtle, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DA950, void, PlayEquipByTurtleFliped, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DA990, void, PlayEquipByTurtleUpsideDown, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DA9D0, void, PlayEquipByTurtleUpsideDownFliped, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DAA10, void, EnableRootMotion, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DADB0, void, DisableRootMotion, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DB0F0, void, OnProcessRootMotion, app::TurtleShell* this_ptr, app::Vector3 motion)
    IL2CPP_REGISTER_METHOD(0x013DB3B0, void, OnProcessRootRotation, app::TurtleShell* this_ptr, app::Quaternion delta_rotation)
    IL2CPP_REGISTER_METHOD(0x013DB6D0, bool, IsUpsideDown, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DB7F0, bool, FrontIsFacingLeft, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DB910, void, OnEnterPulledByLeash, app::TurtleShell* this_ptr, app::Vector3 target)
    IL2CPP_REGISTER_METHOD(0x013DB950, void, OnUpdatePulledByLeash, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DBCF0, void, OnExitPulledByLeash, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C754B0, int32_t, get_BashPriority, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DBD10, bool, CanBeBashed, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FB0A0, bool, CanBeHitByMelee, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006FB0A0, bool, CanBeHitByHammerHandle, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DBD10, bool, CanBeSpiritLeashed, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DBD30, void, OnRecieveDamage, app::TurtleShell* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x013DC150, void, OnCollisionEnter, app::TurtleShell* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x013DC1B0, void, PlayShake, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DC2A0, void, OnDrawGizmos, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008556D0, int32_t, get_HammerPriority, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HammerEnableAutoTarget, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_PositionOffset, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007008C0, app::IDamageReciever__Array*, get_AffectedReceivers, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013DCA00, void, ctor, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::TurtleShell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::TurtleShell* this_ptr)
} // namespace app::classes::TurtleShell
