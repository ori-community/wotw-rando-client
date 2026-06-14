#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterMinibossEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterMinibossEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossEntity__Fields_DEFINED)
#include <Modloader/app/structs/LaserShooterEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_LaserShooterEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LaserShooterMinibossEntity__Fields_DEFINED
struct DamageReceiver;
struct BlockableLaser;
struct Transform;
struct MoonBool;
struct RTPC;
struct Event_1;
struct List_1_BlockableLaser_;
struct LaserShooterMinibossPathMover;
struct List_1_LaserShooterRockSpawnPoint_;
struct LaserShieldRotationController;
struct EntityTargetting;
struct LaserShooterMinibossPath;
struct LaserShooterMinibossEntity__Fields {
    struct LaserShooterEntity__Fields _;
    struct DamageReceiver* MainHitBox;
    struct BlockableLaser* MainLaser;
    struct Transform* MainOscilator;
    float ForceDampening;
    float SelfSpringStrenght;
    float MinSpringSpeed;
    float SecondPhaseTriggerTreshold;
    float ThirdPhaseTriggerTreshold;
    struct MoonBool* HasPhaseChanged;
    struct RTPC* WwiseShieldPercentage;
    struct Event_1* WwisePartialRepairStartEvent;
    struct Event_1* WwisePartialRepairStopEvent;
    struct Event_1* WwiseFullRepairStartEvent;
    struct Event_1* WwiseFullRepairStopEvent;
    struct RTPC* WwiseRepairCountPercentage;
    struct Event_1* WwiseShieldAttackPullStartEvent;
    struct Event_1* WwiseShieldAttackHoldStartEvent;
    struct Event_1* WwiseShieldAttackShootStartEvent;
    struct Event_1* WwiseShieldAttackShakeStartEvent;
    struct RTPC* WwiseShieldAttackPiecesShakeStrength;
    struct Event_1* WwiseShieldAttackSuckPiecesBackEvent;
    struct List_1_BlockableLaser_* m_laserBeams;
    struct LaserShooterMinibossPathMover* m_pathMover;
    struct List_1_LaserShooterRockSpawnPoint_* m_rockSpawnPositions;
    struct LaserShieldRotationController* m_shieldController;
    int32_t m_phase;
    struct EntityTargetting* m_targettingComp;
    int32_t m_randomIndex;
    int32_t _CurrentBeamCount_k__BackingField;
    struct Vector3 _AccumulatedForce_k__BackingField;
    struct LaserShooterMinibossPath* _Paths_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterMinibossEntity__Fields_FWDDECL
#include <Modloader/app/structs/BlockableLaser.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/LaserShieldRotationController.h>
#include <Modloader/app/structs/LaserShooterMinibossPath.h>
#include <Modloader/app/structs/LaserShooterMinibossPathMover.h>
#include <Modloader/app/structs/List_1_BlockableLaser_.h>
#include <Modloader/app/structs/List_1_LaserShooterRockSpawnPoint_.h>
#include <Modloader/app/structs/MoonBool.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterMinibossEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterMinibossEntity__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterMinibossEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterMinibossEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
