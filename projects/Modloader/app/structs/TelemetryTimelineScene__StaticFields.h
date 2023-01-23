#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TelemetryTimelineScene__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TelemetryTimelineScene__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryTimelineScene__StaticFields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_TelemetryTimelineScene__StaticFields_DEFINED
struct GUIStyle;
struct Texture2D;
struct TelemetryTimelineScene__StaticFields {
    struct Rect s_tempRect;
    bool s_isGUIInited;
    struct GUIStyle* s_labelStyle;
    struct GUIStyle* s_zoneGuiStyle;
    struct Texture2D* s_1x1Texture;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TelemetryTimelineScene__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TelemetryTimelineScene__StaticFields_FWDDECL
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_TelemetryTimelineScene__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryTimelineScene__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TelemetryTimelineScene__StaticFields_FWDDECL)
#include <Modloader/app/structs/TelemetryTimelineScene__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TelemetryTimelineScene__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
