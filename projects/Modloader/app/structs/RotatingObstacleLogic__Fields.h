#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RotatingObstacleLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RotatingObstacleLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotatingObstacleLogic__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_RotatingObstacleLogic__Fields_DEFINED
struct RotatingObstacleAnimator;
struct RotatingObstacleLogic__Fields {
    struct MonoBehaviour__Fields _;
    float Speed;
    float m_rotation;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;

    struct RotatingObstacleAnimator* Animator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RotatingObstacleLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_RotatingObstacleLogic__Fields_FWDDECL
#include <Modloader/app/structs/RotatingObstacleAnimator.h>
#endif
#undef IL2CPP_STRUCT_RotatingObstacleLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RotatingObstacleLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RotatingObstacleLogic__Fields_FWDDECL)
#include <Modloader/app/structs/RotatingObstacleLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RotatingObstacleLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
