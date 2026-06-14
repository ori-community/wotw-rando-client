#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotLegacySetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotLegacySetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotLegacySetup_DEFINED)
#include <Modloader/app/structs/ScreenshotLegacySetup__Fields.h>
#if defined(IL2CPP_STRUCT_ScreenshotLegacySetup__Fields_DEFINED)
#define IL2CPP_STRUCT_ScreenshotLegacySetup_DEFINED
struct ScreenshotLegacySetup__Class;
struct ScreenshotLegacySetup {
    struct ScreenshotLegacySetup__Class* klass;
    MonitorData* monitor;
    struct ScreenshotLegacySetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotLegacySetup_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotLegacySetup_FWDDECL
#include <Modloader/app/structs/ScreenshotLegacySetup__Class.h>
#endif
#undef IL2CPP_STRUCT_ScreenshotLegacySetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotLegacySetup_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotLegacySetup_FWDDECL)
#include <Modloader/app/structs/ScreenshotLegacySetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotLegacySetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
