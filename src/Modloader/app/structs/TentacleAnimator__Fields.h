#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleAnimator__Fields_DEFINED
struct Transform;
struct TentaclePhysicsController;
struct AnimationCurve;
struct TentacleAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct Transform* referenceTargetPoint;
    struct TentaclePhysicsController* physicsController;
    struct AnimationCurve* alignmentForceCurve;
    float m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/TentaclePhysicsController.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TentacleAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
