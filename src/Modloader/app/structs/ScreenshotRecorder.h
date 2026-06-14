#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotRecorder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotRecorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotRecorder_DEFINED)
#include <Modloader/app/structs/ScreenshotRecorder__Fields.h>
#if defined(IL2CPP_STRUCT_ScreenshotRecorder__Fields_DEFINED)
#define IL2CPP_STRUCT_ScreenshotRecorder_DEFINED
struct ScreenshotRecorder__Class;
struct ScreenshotRecorder {
    struct ScreenshotRecorder__Class* klass;
    MonitorData* monitor;
    struct ScreenshotRecorder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotRecorder_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotRecorder_FWDDECL
#include <Modloader/app/structs/ScreenshotRecorder__Class.h>
#endif
#undef IL2CPP_STRUCT_ScreenshotRecorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotRecorder_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotRecorder_FWDDECL)
#include <Modloader/app/structs/ScreenshotRecorder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotRecorder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
