#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoTrimMarker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoTrimMarker_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoTrimMarker_DEFINED)
#include <Modloader/app/structs/VideoTrimMarker__Fields.h>
#if defined(IL2CPP_STRUCT_VideoTrimMarker__Fields_DEFINED)
#define IL2CPP_STRUCT_VideoTrimMarker_DEFINED
struct VideoTrimMarker__Class;
struct VideoTrimMarker {
    struct VideoTrimMarker__Class* klass;
    MonitorData* monitor;
    struct VideoTrimMarker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VideoTrimMarker_FWDDECL)
#define IL2CPP_STRUCT_VideoTrimMarker_FWDDECL
#include <Modloader/app/structs/VideoTrimMarker__Class.h>
#endif
#undef IL2CPP_STRUCT_VideoTrimMarker_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoTrimMarker_DEFINED) && !defined(IL2CPP_STRUCT_VideoTrimMarker_FWDDECL)
#include <Modloader/app/structs/VideoTrimMarker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoTrimMarker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
