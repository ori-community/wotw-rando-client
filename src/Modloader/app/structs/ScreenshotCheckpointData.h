#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotCheckpointData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotCheckpointData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotCheckpointData_DEFINED)
#include <Modloader/app/structs/ScreenshotCheckpointData__Fields.h>
#if defined(IL2CPP_STRUCT_ScreenshotCheckpointData__Fields_DEFINED)
#define IL2CPP_STRUCT_ScreenshotCheckpointData_DEFINED
struct ScreenshotCheckpointData__Class;
struct ScreenshotCheckpointData {
    struct ScreenshotCheckpointData__Class* klass;
    MonitorData* monitor;
    struct ScreenshotCheckpointData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotCheckpointData_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotCheckpointData_FWDDECL
#include <Modloader/app/structs/ScreenshotCheckpointData__Class.h>
#endif
#undef IL2CPP_STRUCT_ScreenshotCheckpointData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotCheckpointData_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotCheckpointData_FWDDECL)
#include <Modloader/app/structs/ScreenshotCheckpointData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotCheckpointData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
