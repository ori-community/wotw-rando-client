#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotTextMarker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotTextMarker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotTextMarker_DEFINED)
#include <Modloader/app/structs/ScreenshotTextMarker__Fields.h>
#if defined(IL2CPP_STRUCT_ScreenshotTextMarker__Fields_DEFINED)
#define IL2CPP_STRUCT_ScreenshotTextMarker_DEFINED
struct ScreenshotTextMarker__Class;
struct ScreenshotTextMarker {
    struct ScreenshotTextMarker__Class* klass;
    MonitorData* monitor;
    struct ScreenshotTextMarker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotTextMarker_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotTextMarker_FWDDECL
#include <Modloader/app/structs/ScreenshotTextMarker__Class.h>
#endif
#undef IL2CPP_STRUCT_ScreenshotTextMarker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotTextMarker_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotTextMarker_FWDDECL)
#include <Modloader/app/structs/ScreenshotTextMarker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotTextMarker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
