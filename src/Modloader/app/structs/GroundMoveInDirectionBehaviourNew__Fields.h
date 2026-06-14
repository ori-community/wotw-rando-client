#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundMoveInDirectionBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundMoveInDirectionBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundMoveInDirectionBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GroundMoveInDirectionBehaviourNew__Fields_DEFINED
struct MoonBool;
struct MoonFloat;
struct GroundEntityLocomotion;
struct GroundMoveInDirectionBehaviourNew__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonBool* MoveLeft;
    int32_t TraversalSpeed;
    struct MoonFloat* MinDuration;
    struct MoonFloat* MaxDuration;
    bool FailIfOffAllowedZone;
    bool FailIfHasObstacle;
    bool m_failedOnEnter;
    float m_timer;
    struct Vector3 m_Direction;
    struct GroundEntityLocomotion* m_locomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundMoveInDirectionBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundMoveInDirectionBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonBool.h>
#include <Modloader/app/structs/MoonFloat.h>
#endif
#undef IL2CPP_STRUCT_GroundMoveInDirectionBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundMoveInDirectionBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundMoveInDirectionBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/GroundMoveInDirectionBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundMoveInDirectionBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
