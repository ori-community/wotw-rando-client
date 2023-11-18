#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotHandle__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotHandle__Boxed_DEFINED)
#include <Modloader/app/structs/ScreenshotHandle.h>
#if defined(IL2CPP_STRUCT_ScreenshotHandle_DEFINED)
#define IL2CPP_STRUCT_ScreenshotHandle__Boxed_DEFINED
struct ScreenshotHandle__Class;
struct ScreenshotHandle__Boxed {
    struct ScreenshotHandle__Class* klass;
    MonitorData* monitor;
    struct ScreenshotHandle fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotHandle__Boxed_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotHandle__Boxed_FWDDECL
#include <Modloader/app/structs/ScreenshotHandle__Class.h>
#endif
#undef IL2CPP_STRUCT_ScreenshotHandle__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotHandle__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotHandle__Boxed_FWDDECL)
#include <Modloader/app/structs/ScreenshotHandle__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotHandle__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
