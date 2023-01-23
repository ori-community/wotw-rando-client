#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotText_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotText_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotText_DEFINED)
#include <Modloader/app/structs/ScreenshotText__Fields.h>
#if defined(IL2CPP_STRUCT_ScreenshotText__Fields_DEFINED)
#define IL2CPP_STRUCT_ScreenshotText_DEFINED
struct ScreenshotText__Class;
struct ScreenshotText {
    struct ScreenshotText__Class* klass;
    MonitorData* monitor;
    struct ScreenshotText__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotText_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotText_FWDDECL
#include <Modloader/app/structs/ScreenshotText__Class.h>
#endif
#undef IL2CPP_STRUCT_ScreenshotText_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotText_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotText_FWDDECL)
#include <Modloader/app/structs/ScreenshotText.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotText.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
