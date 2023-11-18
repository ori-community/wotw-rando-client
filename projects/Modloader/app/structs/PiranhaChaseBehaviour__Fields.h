#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PiranhaChaseBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PiranhaChaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaChaseBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_PiranhaEntity___Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_PiranhaEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_PiranhaChaseBehaviour__Fields_DEFINED
struct MoonVector3;
struct SwimmingLocomotion;
struct PiranhaChaseBehaviour__Fields {
    struct EntityBehaviourNode_1_PiranhaEntity___Fields _;
    struct MoonVector3* TargetPosition;
    float ArriveDistance;
    float ArrivalCheckConeAngle;
    float TraversalTier;
    float MinSubmersion;
    float SubmersionCheckStep;
    int32_t MaxSubmersionChecks;
    struct Vector2 m_targetPosition;
    struct SwimmingLocomotion* m_locomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PiranhaChaseBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PiranhaChaseBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/SwimmingLocomotion.h>
#endif
#undef IL2CPP_STRUCT_PiranhaChaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaChaseBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PiranhaChaseBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PiranhaChaseBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PiranhaChaseBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
