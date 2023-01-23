#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderlingMoveFastBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderlingMoveFastBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingMoveFastBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/SpiderlingMoveFastBehaviour_FastState__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SpiderlingMoveFastBehaviour_FastState__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiderlingMoveFastBehaviour__Fields_DEFINED
struct MoonVector3;
struct GroundEntityLocomotion;
struct ILocomotionTurningHandler;
struct SpiderlingMoveFastBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonVector3* m_targetPosition;
    struct MoonVector3* m_patrolOrigin;
    float MaxPatrolRadius;
    float IdleTime;
    float LookDirectionUpdateDelay;
    float DashTime;
    struct GroundEntityLocomotion* m_locomotion;
    struct ILocomotionTurningHandler* m_turningHandler;
    float m_timer;
    bool m_isMoving;
    struct Vector2 m_effectivePatrolOrigin;
    float MoveSide;
    SpiderlingMoveFastBehaviour_FastState__Enum m_FastState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderlingMoveFastBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderlingMoveFastBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/MoonVector3.h>
#endif
#undef IL2CPP_STRUCT_SpiderlingMoveFastBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingMoveFastBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderlingMoveFastBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderlingMoveFastBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderlingMoveFastBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
