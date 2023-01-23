#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenshotCheckpointData__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenshotCheckpointData__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotCheckpointData__Array_DEFINED)
#define IL2CPP_STRUCT_ScreenshotCheckpointData__Array_DEFINED
struct ScreenshotCheckpointData__Array__Class;
struct ScreenshotCheckpointData;
struct ScreenshotCheckpointData__Array {
    struct ScreenshotCheckpointData__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct ScreenshotCheckpointData* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_ScreenshotCheckpointData__Array_FWDDECL)
#define IL2CPP_STRUCT_ScreenshotCheckpointData__Array_FWDDECL
#include <Modloader/app/structs/ScreenshotCheckpointData.h>
#include <Modloader/app/structs/ScreenshotCheckpointData__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_ScreenshotCheckpointData__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenshotCheckpointData__Array_DEFINED) && !defined(IL2CPP_STRUCT_ScreenshotCheckpointData__Array_FWDDECL)
#include <Modloader/app/structs/ScreenshotCheckpointData__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenshotCheckpointData__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
