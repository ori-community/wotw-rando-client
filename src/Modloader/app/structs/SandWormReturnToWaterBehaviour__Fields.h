#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormReturnToWaterBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormReturnToWaterBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormReturnToWaterBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SandWormEntity___Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SandWormEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SandWormReturnToWaterBehaviour__Fields_DEFINED
struct SandWormLocomotion;
struct Transform;
struct SandWormReturnToWaterBehaviour__Fields {
    struct EntityBehaviourNode_1_SandWormEntity___Fields _;
    float MaxCheckDistance;
    float MaxReturnTime;
    struct SandWormLocomotion* m_wormLocomotion;
    struct Vector2 m_targetPosition;
    float m_outSideSandTime;
    struct Transform* m_headTop;
    struct Transform* m_head;
    struct Transform* m_tail;
    int32_t m_requestID;
    float MaxStuckTime;
    float m_noSafePathTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormReturnToWaterBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormReturnToWaterBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/SandWormLocomotion.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SandWormReturnToWaterBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormReturnToWaterBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormReturnToWaterBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormReturnToWaterBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormReturnToWaterBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
