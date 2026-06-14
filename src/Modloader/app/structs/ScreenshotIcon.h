#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotIcon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotIcon_DEFINED)
#include <Modloader/app/structs/ScreenshotIcon__Fields.h>
#if defined(IL2CPP_STRUCT_ScreenshotIcon__Fields_DEFINED)
#define IL2CPP_STRUCT_ScreenshotIcon_DEFINED
struct ScreenshotIcon__Class;
struct ScreenshotIcon {
    struct ScreenshotIcon__Class* klass;
    MonitorData* monitor;
    struct ScreenshotIcon__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotIcon_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotIcon_FWDDECL
#include <Modloader/app/structs/ScreenshotIcon__Class.h>
#endif
#undef IL2CPP_STRUCT_ScreenshotIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotIcon_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotIcon_FWDDECL)
#include <Modloader/app/structs/ScreenshotIcon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotIcon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
