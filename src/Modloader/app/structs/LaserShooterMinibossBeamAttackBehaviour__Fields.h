#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterMinibossBeamAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterMinibossBeamAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossBeamAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields.h>
#include <Modloader/app/structs/LaserShooterMinibossBeamAttackBehaviour_State__Enum.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_LaserShooterMinibossBeamAttackBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_LaserShooterMinibossBeamAttackBehaviour__Fields_DEFINED
struct Transform;
struct MoonTimeline;
struct LaserShooterMinibossBeamAttackSettings;
struct GameObject;
struct LaserShooterMinibossBeamAttackBehaviour__Fields {
    struct EntityBehaviourNode_1_LaserShooterMinibossEntity___Fields _;
    struct Transform* Rotation;
    struct MoonTimeline* AnticTimeline;
    struct MoonTimeline* BeamTimeline;
    struct MoonTimeline* ResolveTimeline;
    struct LaserShooterMinibossBeamAttackSettings* Settings;
    struct GameObject* Beam;
    int32_t BeamCount;
    struct MoonTimeline* m_currentTimeline;
    LaserShooterMinibossBeamAttackBehaviour_State__Enum m_state;

    float m_timeInState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossBeamAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterMinibossBeamAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LaserShooterMinibossBeamAttackSettings.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterMinibossBeamAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterMinibossBeamAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterMinibossBeamAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterMinibossBeamAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterMinibossBeamAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
