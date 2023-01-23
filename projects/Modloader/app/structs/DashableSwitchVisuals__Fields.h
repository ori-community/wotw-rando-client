#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashableSwitchVisuals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashableSwitchVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashableSwitchVisuals__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DashableSwitchVisuals__Fields_DEFINED
struct MoonTimeline;
struct DashableSwitchVisuals__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* OpenTimeline;
    struct MoonTimeline* CloseTimeline;
    struct MoonTimeline* RecedeTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DashableSwitchVisuals__Fields_FWDDECL)
#define IL2CPP_STRUCT_DashableSwitchVisuals__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_DashableSwitchVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashableSwitchVisuals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DashableSwitchVisuals__Fields_FWDDECL)
#include <Modloader/app/structs/DashableSwitchVisuals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashableSwitchVisuals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
