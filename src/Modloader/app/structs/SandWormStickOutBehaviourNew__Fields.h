#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormStickOutBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormStickOutBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormStickOutBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SandWormEntity___Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SandWormEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SandWormStickOutBehaviourNew__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonFloat;
struct MoonVector3;
struct AnimationCurve;
struct Event_1;
struct SandWormLocomotion;
struct SandWormEntity;
struct SandWormStickOutBehaviourNew__Fields {
    struct EntityBehaviourNode_1_SandWormEntity___Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* LookTarget;
    struct MoonFloat* MinDistanceToTarget;
    struct MoonVector3* EdgePosition;
    struct MoonVector3* EdgePositionNormal;
    float HeadRotationSpeed;
    float Duration;
    float StickAmount;
    float RotationRate;
    struct AnimationCurve* StickHeadOutMovementCurve;
    struct Event_1* StickHeadOutSound;
    struct Vector3 m_stickOutPosition;
    struct Vector3 m_stickOutNormal;
    struct SandWormLocomotion* m_locomotion;
    bool m_movingToEdge;
    struct Vector3 m_stickOutStartingPos;
    float m_time;
    bool m_hasEdgeAnchor;
    struct SandWormEntity* m_wormEntity;
    bool m_soundPlayed;
    struct Vector3 m_edgePositionNormal;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormStickOutBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormStickOutBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/SandWormEntity.h>
#include <Modloader/app/structs/SandWormLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SandWormStickOutBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormStickOutBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormStickOutBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormStickOutBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormStickOutBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
