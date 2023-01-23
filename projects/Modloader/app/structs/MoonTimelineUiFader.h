#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTimelineUiFader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTimelineUiFader_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimelineUiFader_DEFINED)
#include <Modloader/app/structs/MoonTimelineUiFader__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTimelineUiFader__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTimelineUiFader_DEFINED
struct MoonTimelineUiFader__Class;
struct MoonTimelineUiFader {
    struct MoonTimelineUiFader__Class* klass;
    MonitorData* monitor;
    struct MoonTimelineUiFader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTimelineUiFader_FWDDECL)
#define IL2CPP_STRUCT_MoonTimelineUiFader_FWDDECL
#include <Modloader/app/structs/MoonTimelineUiFader__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTimelineUiFader_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTimelineUiFader_DEFINED) && !defined(IL2CPP_STRUCT_MoonTimelineUiFader_FWDDECL)
#include <Modloader/app/structs/MoonTimelineUiFader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTimelineUiFader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
