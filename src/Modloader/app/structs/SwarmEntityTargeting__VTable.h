#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmEntityTargeting__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmEntityTargeting__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmEntityTargeting__VTable_DEFINED)
#define IL2CPP_STRUCT_SwarmEntityTargeting__VTable_DEFINED
struct SwarmEntityTargeting__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Position;
    VirtualInvokeData IsDead;
    VirtualInvokeData CanBeChargeFlamed;
    VirtualInvokeData CanBeChargeDashed;
    VirtualInvokeData CanBeGrenaded;
    VirtualInvokeData CanBeStomped;
    VirtualInvokeData CanBeBashed;
    VirtualInvokeData CanBeSpiritFlamed;
    VirtualInvokeData IsStompBouncable;
    VirtualInvokeData CanBeLevelUpBlasted;
    VirtualInvokeData CanBeSpiritSlashed;
    VirtualInvokeData CanBeHitByBow;
    VirtualInvokeData CanBeHitByMelee;
    VirtualInvokeData CanBeHitByHammerHandle;
    VirtualInvokeData CanBeHeavySpiritSlashed;
    VirtualInvokeData CanBeSpiritLeashed;
    VirtualInvokeData CanBeHomingMissiled;
    VirtualInvokeData CanBeTrapped;
    VirtualInvokeData CanBeSpiritSpeared;
    VirtualInvokeData CanBeTeleportedByBeacon;
    VirtualInvokeData CanBeGlowed;
    VirtualInvokeData get_AffectedReceivers;
    VirtualInvokeData get_SpiritFlamePriority;
    VirtualInvokeData get_OriDistanceFromAttackable;
    VirtualInvokeData get_SpiritFlameRange;
    VirtualInvokeData get_RequiresSpiritFlameAbilityToTarget;
    VirtualInvokeData OnSpiritFlameHighlight;
    VirtualInvokeData OnSpiritFlameDehighlight;
    VirtualInvokeData GenerateSpiritFlameProjectileOffset;
    VirtualInvokeData get_BashPriority;
    VirtualInvokeData OnEnterBash;
    VirtualInvokeData OnBashHighlight;
    VirtualInvokeData OnBashDehighlight;
    VirtualInvokeData OnChargeDashHighlight;
    VirtualInvokeData OnChargeDashDehighlight;
    VirtualInvokeData CountsTowardsPowerOfLightAchievement;
    VirtualInvokeData CountsTowardsSuperJumpAchievement;
    VirtualInvokeData get_SpiritSlashPriority;
    VirtualInvokeData OnSpiritSlashHighlight;
    VirtualInvokeData OnSpiritSlashDehighlight;
    VirtualInvokeData GetSpiritSlashDamageAmount;
    VirtualInvokeData get_SpiritLeashCost;
    VirtualInvokeData OnSpiritLeashHighlight;
    VirtualInvokeData OnSpiritLeashDehighlight;
    VirtualInvokeData OnSpiritLeashed;
    VirtualInvokeData get_HookTargetTransform;
    VirtualInvokeData get_PositionOffset;
    VirtualInvokeData get_OriCloseEnoughDistance;
    VirtualInvokeData get_ShouldDecelerateOnApproach;
    VirtualInvokeData get_CanBeSustained;
    VirtualInvokeData get_LeashInteractionMode;
    VirtualInvokeData get_HeavySpiritSlashPriority;
    VirtualInvokeData OnHeavySpiritSlashHighlight;
    VirtualInvokeData OnHeavySpiritSlashDehighlight;
    VirtualInvokeData get_HomingMissileSpellPriority;
    VirtualInvokeData OnHomingMissileSpellHighlight;
    VirtualInvokeData OnHomingMissileSpellDehighlight;
    VirtualInvokeData CanTrap;
    VirtualInvokeData Trap;
    VirtualInvokeData Untrap;
    VirtualInvokeData get_BowPriority;
    VirtualInvokeData get_BowEnableAutoTarget;
    VirtualInvokeData ShouldArrowExplode;
    VirtualInvokeData get_BowAutoTargetPosition;
    VirtualInvokeData ShouldArrowBeReflected;
    VirtualInvokeData get_HammerPriority;
    VirtualInvokeData get_HammerEnableAutoTarget;
    VirtualInvokeData get_IsFireShardAttackable;
    VirtualInvokeData OnBeforeTeleportation;
    VirtualInvokeData Teleport;
    VirtualInvokeData OnAfterTeleportation;
    VirtualInvokeData ITeleportBeaconAttackable_get_Position;
    VirtualInvokeData OnGlowReceived;
    VirtualInvokeData OnCameraFrustumSuspended;
    VirtualInvokeData OnCameraFrustumResumed;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData Prewarm;
    VirtualInvokeData ISwarmAttackable_ShouldSpawnEffect;
};
#endif
#if !defined(IL2CPP_STRUCT_SwarmEntityTargeting__VTable_FWDDECL)
#define IL2CPP_STRUCT_SwarmEntityTargeting__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_SwarmEntityTargeting__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmEntityTargeting__VTable_DEFINED) && !defined(IL2CPP_STRUCT_SwarmEntityTargeting__VTable_FWDDECL)
#include <Modloader/app/structs/SwarmEntityTargeting__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmEntityTargeting__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
