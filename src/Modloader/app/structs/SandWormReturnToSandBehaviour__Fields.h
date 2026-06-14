#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormReturnToSandBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormReturnToSandBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormReturnToSandBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SandWormEntity___Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SandWormEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SandWormReturnToSandBehaviour__Fields_DEFINED
struct SandWormLocomotion;
struct SandWormReturnToSandBehaviour__Fields {
    struct EntityBehaviourNode_1_SandWormEntity___Fields _;
    float MaxCheckDistance;
    float MaxReturnTime;
    float MaxStuckTime;
    struct SandWormLocomotion* m_wormLocomotion;
    struct Vector2 m_targetPosition;
    float m_outSideSandTime;
    float m_zeroSpeedTime;
    float m_noSafePathTime;
    struct Vector3 m_lastPosition;
    int32_t m_requestID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormReturnToSandBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormReturnToSandBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/SandWormLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SandWormReturnToSandBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormReturnToSandBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormReturnToSandBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormReturnToSandBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormReturnToSandBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
