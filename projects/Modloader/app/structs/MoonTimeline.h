#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTimeline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTimeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimeline_DEFINED)
#include <Modloader/app/structs/MoonTimeline__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTimeline__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTimeline_DEFINED
struct MoonTimeline__Class;
struct MoonTimeline {
    struct MoonTimeline__Class* klass;
    MonitorData* monitor;
    struct MoonTimeline__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTimeline_FWDDECL)
#define IL2CPP_STRUCT_MoonTimeline_FWDDECL
#include <Modloader/app/structs/MoonTimeline__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTimeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimeline_DEFINED) && !defined(IL2CPP_STRUCT_MoonTimeline_FWDDECL)
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTimeline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
