#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotIconMarker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotIconMarker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotIconMarker_DEFINED)
#include <Modloader/app/structs/ScreenshotIconMarker__Fields.h>
#if defined(IL2CPP_STRUCT_ScreenshotIconMarker__Fields_DEFINED)
#define IL2CPP_STRUCT_ScreenshotIconMarker_DEFINED
struct ScreenshotIconMarker__Class;
struct ScreenshotIconMarker {
    struct ScreenshotIconMarker__Class* klass;
    MonitorData* monitor;
    struct ScreenshotIconMarker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotIconMarker_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotIconMarker_FWDDECL
#include <Modloader/app/structs/ScreenshotIconMarker__Class.h>
#endif
#undef IL2CPP_STRUCT_ScreenshotIconMarker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotIconMarker_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotIconMarker_FWDDECL)
#include <Modloader/app/structs/ScreenshotIconMarker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotIconMarker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
