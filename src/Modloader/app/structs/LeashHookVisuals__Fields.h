#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeashHookVisuals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeashHookVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashHookVisuals__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LeashHookVisuals__Fields_DEFINED
struct MoonTimeline;
struct MoonAnimator;
struct FloatAnimationParameter;
struct Transform;
struct LeashHookVisuals__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* OpenTimeline;
    struct MoonTimeline* CloseTimeline;
    struct MoonTimeline* IdleOpenedTimeline;
    struct MoonTimeline* IdleClosedTimeline;
    struct MoonAnimator* PlantMoonAnimator;
    struct FloatAnimationParameter* OpenAngle;
    struct Transform* HookTarget;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeashHookVisuals__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeashHookVisuals__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LeashHookVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeashHookVisuals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeashHookVisuals__Fields_FWDDECL)
#include <Modloader/app/structs/LeashHookVisuals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeashHookVisuals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
