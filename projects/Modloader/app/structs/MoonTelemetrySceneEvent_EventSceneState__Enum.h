#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetrySceneEvent_EventSceneState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetrySceneEvent_EventSceneState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent_EventSceneState__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetrySceneEvent_EventSceneState__Enum_DEFINED
enum class MoonTelemetrySceneEvent_EventSceneState__Enum : int32_t {
    LoadingBegin = 0x00000000,
    LoadingEnd = 0x00000001,
    AwakeBegin = 0x00000002,
    AwakeEnd = 0x00000003,
    StartBegin = 0x00000004,
    StartEnd = 0x00000005,
    EnableBegin = 0x00000006,
    EnableEnd = 0x00000007,
    DisableBegin = 0x00000008,
    DisableEnd = 0x00000009,
    UnloadTransformsBegin = 0x0000000a,
    UnloadTransformsEnd = 0x0000000b,
    UnloadResourcesBegin = 0x0000000c,
    UnloadResourcesEnd = 0x0000000d,
    None = 0x0000000e,
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent_EventSceneState__Enum_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetrySceneEvent_EventSceneState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoonTelemetrySceneEvent_EventSceneState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent_EventSceneState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent_EventSceneState__Enum_FWDDECL)
#include <Modloader/app/structs/MoonTelemetrySceneEvent_EventSceneState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetrySceneEvent_EventSceneState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
