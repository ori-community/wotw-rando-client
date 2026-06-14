#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraStraightLineMotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraStraightLineMotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraStraightLineMotion__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CameraStraightLineMotion__Fields_DEFINED
struct Action;
struct Transform;
struct Rigidbody;
struct AnimationCurve;
struct CameraStraightLineMotion__Fields {
    struct MonoBehaviour__Fields _;
    struct Action* OnMotionFinishedEvent;
    struct Transform* m_transform;
    struct Rigidbody* m_rigidbody;
    struct Vector3 m_startPosition;
    struct Vector3 m_endPosition;
    float m_time;
    float m_duration;
    struct AnimationCurve* SmoothingCurve;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraStraightLineMotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraStraightLineMotion__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CameraStraightLineMotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraStraightLineMotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraStraightLineMotion__Fields_FWDDECL)
#include <Modloader/app/structs/CameraStraightLineMotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraStraightLineMotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
