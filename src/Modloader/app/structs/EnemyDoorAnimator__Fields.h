#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyDoorAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyDoorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyDoorAnimator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_EnemyDoorAnimator__Fields_DEFINED
struct DynamicDataResolver;
struct MoonTimeline;
struct EnemyDoorVisuals;
struct EnemyDoorAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct MoonTimeline* OpenDoorTimeline;
    struct MoonTimeline* CloseDoorTimeline;
    struct EnemyDoorVisuals* Visuals;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyDoorAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnemyDoorAnimator__Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/EnemyDoorVisuals.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_EnemyDoorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyDoorAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnemyDoorAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/EnemyDoorAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyDoorAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
