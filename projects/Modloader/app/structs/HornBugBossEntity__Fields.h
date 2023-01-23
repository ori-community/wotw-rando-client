#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugBossEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugBossEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugBossEntity__Fields_DEFINED)
#include <Modloader/app/structs/EffectSpawn.h>
#include <Modloader/app/structs/GroundMovingEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_GroundMovingEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_EffectSpawn_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_HornBugBossEntity__Fields_DEFINED
struct Transform;
struct PlayerInsideZoneChecker;
struct ObjectInsideZoneChecker;
struct MoonTimeline;
struct GameObject;
struct SerializedIntUberState;
struct EntityBehaviourNode__Array;
struct EntityPlaceholderScalingData;
struct EntityPlaceholderScalingLink;
struct List_1_Moon_DamageReceiver_;
struct HornbugBossBaseBehaviour;
struct HornBugBossEntity__Fields {
    struct GroundMovingEntity__Fields _;
    struct Transform* BodyTransform;
    struct PlayerInsideZoneChecker* MoveFwdZone;
    struct PlayerInsideZoneChecker* MoveBwdZone;
    struct PlayerInsideZoneChecker* TurnZone;
    struct PlayerInsideZoneChecker* TurnAttackZone;
    struct PlayerInsideZoneChecker* GroundSlamZone;
    struct PlayerInsideZoneChecker* JumpStompZone;
    struct PlayerInsideZoneChecker* BullChargeZone;
    struct ObjectInsideZoneChecker* JumpSafeZone;
    float SafeMoveFwdDist;
    float SafeMoveBwdDist;
    float SafeTurnAttackBwdDist;
    float GroundSlamMinWallDist;
    float BullChargeMinWallDist;
    float BullChargePrefWallDist;
    float GiveSpaceMinDist;
    struct Transform* ArenaWallLft;
    struct Transform* ArenaWallRgt;
    struct MoonTimeline* BlockedHitTimeline;
    struct EffectSpawn BlockedHitEffect;
    struct GameObject* BloodEffect;
    struct SerializedIntUberState* EncounterState;
    int32_t ShouldBeDeadStateIndexMin;
    int32_t ShouldNotSpawnOrbsIndexMin;
    struct EntityBehaviourNode__Array* LastBlowNotAllowed;
    struct MoonTimeline* m_healthBarTransparencySequence;
    float m_combatElapsedTime;
    struct EntityPlaceholderScalingData* Scaling;
    struct EntityPlaceholderScalingLink* ScalingLink;
    bool HasStartPosition;
    struct Vector3 StartPosition;
    struct List_1_Moon_DamageReceiver_* ArmorParts;
    float MoveFwdCooldownAfterMoveBwd;
    float MoveBwdCooldownAfterMoveFwd;
    float m_moveFwd_DisableUntilTime;
    float m_moveBwd_DisableUntilTime;
    float m_move_CommitTimeMin;
    float m_move_CommitTimeMax;
    struct HornbugBossBaseBehaviour* MoveFwdBehaviour;
    struct HornbugBossBaseBehaviour* MoveBwdBehaviour;
    struct HornbugBossBaseBehaviour* TurnBehaviour;
    struct HornbugBossBaseBehaviour* TurnAttackBehaviour;
    struct HornbugBossBaseBehaviour* GroundSlamBehaviour;
    struct HornbugBossBaseBehaviour* JumpStompBehaviour;
    struct HornbugBossBaseBehaviour* BullChargeBehaviour;
    struct HornbugBossBaseBehaviour* m_curBehaviour;
    float m_curBehaviourEnterTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugBossEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_HornBugBossEntity__Fields_FWDDECL
#include <Modloader/app/structs/EntityBehaviourNode__Array.h>
#include <Modloader/app/structs/EntityPlaceholderScalingData.h>
#include <Modloader/app/structs/EntityPlaceholderScalingLink.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HornbugBossBaseBehaviour.h>
#include <Modloader/app/structs/List_1_Moon_DamageReceiver_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ObjectInsideZoneChecker.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_HornBugBossEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugBossEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HornBugBossEntity__Fields_FWDDECL)
#include <Modloader/app/structs/HornBugBossEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugBossEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
