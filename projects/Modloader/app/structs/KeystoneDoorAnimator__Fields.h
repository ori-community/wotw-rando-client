#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeystoneDoorAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeystoneDoorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeystoneDoorAnimator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KeystoneDoorAnimator__Fields_DEFINED
struct DynamicDataResolver;
struct KeystoneDoorVisuals;
struct MoonTimeline;
struct KeystoneDoorAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct KeystoneDoorVisuals* Visuals;
    struct MoonTimeline* DoorFailSequence;
    struct MoonTimeline* DoorOpeningSequence;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeystoneDoorAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_KeystoneDoorAnimator__Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/KeystoneDoorVisuals.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_KeystoneDoorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeystoneDoorAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KeystoneDoorAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/KeystoneDoorAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeystoneDoorAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
