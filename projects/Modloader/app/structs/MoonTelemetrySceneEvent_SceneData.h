#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetrySceneEvent_SceneData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetrySceneEvent_SceneData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent_SceneData_DEFINED)
#include <Modloader/app/structs/MoonTelemetrySceneEvent_EventSceneState__Enum.h>
#if defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent_EventSceneState__Enum_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetrySceneEvent_SceneData_DEFINED
struct String;
struct MoonTelemetrySceneEvent_SceneData {
    struct String* Name;
    MoonTelemetrySceneEvent_EventSceneState__Enum State;

    float Time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent_SceneData_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetrySceneEvent_SceneData_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetrySceneEvent_SceneData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent_SceneData_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent_SceneData_FWDDECL)
#include <Modloader/app/structs/MoonTelemetrySceneEvent_SceneData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetrySceneEvent_SceneData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
