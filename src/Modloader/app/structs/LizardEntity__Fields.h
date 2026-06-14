#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardEntity__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#include <Modloader/app/structs/LizardSpawnType__Enum.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_LizardSpawnType__Enum_DEFINED)
#define IL2CPP_STRUCT_LizardEntity__Fields_DEFINED
struct PlayerInsideZoneChecker;
struct Transform;
struct RetaliationRuleHandler;
struct MaterialBasedLizardEffectsMap;
struct GroundEntityLocomotion;
struct CharacterPlatformMovement;
struct SimpleGoThroughPlatformHandler;
struct LizardEntity__Fields {
    struct EnemyEntity__Fields _;
    struct PlayerInsideZoneChecker* OneTwoThreeAttackRange;
    struct PlayerInsideZoneChecker* QuickAttackRange;
    struct PlayerInsideZoneChecker* PounceAttackRange;
    struct PlayerInsideZoneChecker* OneTwoThreeCounterattackRange;
    struct PlayerInsideZoneChecker* QuickBiteCounterattackRange;
    float MinAttackCooldown;
    struct Transform* VFXHolder;
    struct RetaliationRuleHandler* RetaliationRule;
    float OtherLizardHitReactionTimeWindow;
    float m_minAttackCooldown;
    bool _IsRolling_k__BackingField;
    LizardSpawnType__Enum _SpawnType_k__BackingField;

    struct MaterialBasedLizardEffectsMap* Effects;
    float m_groupBehaviourBaseAttackCooldown;
    float m_lastTimeOtherLizardIsHit;
    struct GroundEntityLocomotion* m_groundEntityLocomotion;
    struct CharacterPlatformMovement* m_platformMovement;
    struct SimpleGoThroughPlatformHandler* m_goThroughPlatformHandler;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardEntity__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MaterialBasedLizardEffectsMap.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/RetaliationRuleHandler.h>
#include <Modloader/app/structs/SimpleGoThroughPlatformHandler.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LizardEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardEntity__Fields_FWDDECL)
#include <Modloader/app/structs/LizardEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
