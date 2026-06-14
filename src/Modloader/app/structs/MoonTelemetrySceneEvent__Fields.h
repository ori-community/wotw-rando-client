#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetrySceneEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetrySceneEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent__Fields_DEFINED)
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent__Fields.h>
#include <Modloader/app/structs/MoonTelemetrySceneEvent_SceneData.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryCharacterBaseEvent__Fields_DEFINED) && defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent_SceneData_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetrySceneEvent__Fields_DEFINED
struct String;
struct MoonTelemetrySceneEvent__Fields {
    struct MoonTelemetryCharacterBaseEvent__Fields _;
    struct MoonTelemetrySceneEvent_SceneData ThisSceneData;
    struct String* _Name_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetrySceneEvent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetrySceneEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetrySceneEvent__Fields_FWDDECL)
#include <Modloader/app/structs/MoonTelemetrySceneEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetrySceneEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
