#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotIconData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotIconData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotIconData_DEFINED)
#include <Modloader/app/structs/ScreenshotIconData__Fields.h>
#if defined(IL2CPP_STRUCT_ScreenshotIconData__Fields_DEFINED)
#define IL2CPP_STRUCT_ScreenshotIconData_DEFINED
struct ScreenshotIconData__Class;
struct ScreenshotIconData {
    struct ScreenshotIconData__Class* klass;
    MonitorData* monitor;
    struct ScreenshotIconData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotIconData_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotIconData_FWDDECL
#include <Modloader/app/structs/ScreenshotIconData__Class.h>
#endif
#undef IL2CPP_STRUCT_ScreenshotIconData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotIconData_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotIconData_FWDDECL)
#include <Modloader/app/structs/ScreenshotIconData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotIconData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
