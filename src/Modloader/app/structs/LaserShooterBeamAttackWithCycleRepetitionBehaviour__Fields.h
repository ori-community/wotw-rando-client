#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterBeamAttackWithCycleRepetitionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterBeamAttackWithCycleRepetitionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterBeamAttackWithCycleRepetitionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_LaserShooterEntity___Fields.h>
#include <Modloader/app/structs/LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum.h>
#include <Modloader/app/structs/Quaternion.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_LaserShooterEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_LaserShooterBeamAttackWithCycleRepetitionBehaviour__Fields_DEFINED
struct Transform;
struct MoonTimeline;
struct GameObject;
struct MoonFloat;
struct LaserShooterBeamAttackWithCycleRepetitionBehaviour__Fields {
    struct EntityBehaviourNode_1_LaserShooterEntity___Fields _;
    struct Transform* Rotation;
    struct MoonTimeline* AnticTimeline;
    struct MoonTimeline* BeamTimeline;
    struct MoonTimeline* ResolveTimeline;
    struct GameObject* Beam;
    int32_t BeamCycles;
    struct MoonFloat* MaxAttackRange;
    struct Quaternion m_targetRotation;
    float m_maxAttackRange;
    struct MoonTimeline* m_currentTimeline;
    LaserShooterBeamAttackWithCycleRepetitionBehaviour_State__Enum m_state;

    float m_timeInState;
    int32_t m_cyclesPlayed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterBeamAttackWithCycleRepetitionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterBeamAttackWithCycleRepetitionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterBeamAttackWithCycleRepetitionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterBeamAttackWithCycleRepetitionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterBeamAttackWithCycleRepetitionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterBeamAttackWithCycleRepetitionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterBeamAttackWithCycleRepetitionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
