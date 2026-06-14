#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRScreenshots_HookScreenshot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRScreenshots_HookScreenshot_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRScreenshots_HookScreenshot_DEFINED)
#include <Modloader/app/structs/IVRScreenshots_HookScreenshot__Fields.h>
#if defined(IL2CPP_STRUCT_IVRScreenshots_HookScreenshot__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRScreenshots_HookScreenshot_DEFINED
struct IVRScreenshots_HookScreenshot__Class;
struct IVRScreenshots_HookScreenshot {
    struct IVRScreenshots_HookScreenshot__Class* klass;
    MonitorData* monitor;
    struct IVRScreenshots_HookScreenshot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRScreenshots_HookScreenshot_FWDDECL)
#define IL2CPP_STRUCT_IVRScreenshots_HookScreenshot_FWDDECL
#include <Modloader/app/structs/IVRScreenshots_HookScreenshot__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRScreenshots_HookScreenshot_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRScreenshots_HookScreenshot_DEFINED) && !defined(IL2CPP_STRUCT_IVRScreenshots_HookScreenshot_FWDDECL)
#include <Modloader/app/structs/IVRScreenshots_HookScreenshot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRScreenshots_HookScreenshot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
