#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTimeline__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTimeline__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimeline__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MoonTimeline__StaticFields_DEFINED
struct List_1_Moon_Timeline_MoonTimeline_;
struct String;
struct MoonTimeline__StaticFields {
    bool AllowRootScopeTech;
    bool UseTimeErrorCorrection;
    int32_t RootTimelinesPlaying;
    int32_t TimelinesPlaying;
    struct List_1_Moon_Timeline_MoonTimeline_* All;
    struct String* m_profilingMarkerName;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTimeline__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonTimeline__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTimeline__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimeline__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTimeline__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonTimeline__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTimeline__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
