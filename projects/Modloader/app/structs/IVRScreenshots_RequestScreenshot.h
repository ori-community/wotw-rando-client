#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRScreenshots_RequestScreenshot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRScreenshots_RequestScreenshot_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRScreenshots_RequestScreenshot_DEFINED)
#include <Modloader/app/structs/IVRScreenshots_RequestScreenshot__Fields.h>
#if defined(IL2CPP_STRUCT_IVRScreenshots_RequestScreenshot__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRScreenshots_RequestScreenshot_DEFINED
struct IVRScreenshots_RequestScreenshot__Class;
struct IVRScreenshots_RequestScreenshot {
    struct IVRScreenshots_RequestScreenshot__Class* klass;
    MonitorData* monitor;
    struct IVRScreenshots_RequestScreenshot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRScreenshots_RequestScreenshot_FWDDECL)
#define IL2CPP_STRUCT_IVRScreenshots_RequestScreenshot_FWDDECL
#include <Modloader/app/structs/IVRScreenshots_RequestScreenshot__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRScreenshots_RequestScreenshot_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRScreenshots_RequestScreenshot_DEFINED) && !defined(IL2CPP_STRUCT_IVRScreenshots_RequestScreenshot_FWDDECL)
#include <Modloader/app/structs/IVRScreenshots_RequestScreenshot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRScreenshots_RequestScreenshot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
