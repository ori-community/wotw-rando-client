#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormGoToEdgeBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormGoToEdgeBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormGoToEdgeBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SandWormEntity___Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SandWormEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SandWormGoToEdgeBehaviourNew__Fields_DEFINED
struct MoonVector3;
struct SandWormLocomotion;
struct SandWormEntity;
struct SandWormGoToEdgeBehaviourNew__Fields {
    struct EntityBehaviourNode_1_SandWormEntity___Fields _;
    struct MoonVector3* EdgePosition;
    struct MoonVector3* EdgePositionNormal;
    struct MoonVector3* TrackedTargetPosition;
    float MaxAngle;
    float MinDistanceToEdge;
    float MaxSuccessDistance;
    float DistanceToCheckForEdge;
    struct SandWormLocomotion* m_locomotion;
    struct SandWormEntity* m_wormEntity;
    struct Vector3 m_target;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormGoToEdgeBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormGoToEdgeBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/SandWormEntity.h>
#include <Modloader/app/structs/SandWormLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SandWormGoToEdgeBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormGoToEdgeBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormGoToEdgeBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormGoToEdgeBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormGoToEdgeBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
