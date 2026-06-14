#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TelemetryTimelineScene__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TelemetryTimelineScene__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryTimelineScene__Fields_DEFINED)
#define IL2CPP_STRUCT_TelemetryTimelineScene__Fields_DEFINED
struct MoonTelemetrySceneEvent__Array;
struct Single__Array;
struct String;
struct GUIContent;
struct __declspec(align(8)) TelemetryTimelineScene__Fields {
    struct MoonTelemetrySceneEvent__Array* m_sceneEvents;
    struct Single__Array* m_eventsTimelineLength;
    struct String* m_sceneName;
    float s_startTime;
    float m_pixelsPerSecond;
    float m_scaleFactor;
    struct GUIContent* m_lastTextGuiContent;
};
#endif
#if !defined(IL2CPP_STRUCT_TelemetryTimelineScene__Fields_FWDDECL)
#define IL2CPP_STRUCT_TelemetryTimelineScene__Fields_FWDDECL
#include <Modloader/app/structs/GUIContent.h>
#include <Modloader/app/structs/MoonTelemetrySceneEvent__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TelemetryTimelineScene__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryTimelineScene__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TelemetryTimelineScene__Fields_FWDDECL)
#include <Modloader/app/structs/TelemetryTimelineScene__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TelemetryTimelineScene__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
