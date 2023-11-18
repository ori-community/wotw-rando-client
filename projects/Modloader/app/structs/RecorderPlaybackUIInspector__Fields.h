#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderPlaybackUIInspector__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderPlaybackUIInspector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUIInspector__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_RecorderPlaybackUIInspector__Fields_DEFINED
struct Dictionary_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_;
struct RecorderPlaybackUIInspector__Fields {
    struct MonoBehaviour__Fields _;
    float kLabelWidth;
    float kLabelPadding;
    struct Rect inspectorPosition;
    int32_t m_CurrentFrame;
    struct Dictionary_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_* m_dataCache;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUIInspector__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecorderPlaybackUIInspector__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_Dictionary_2_System_String_System_Reflection_FieldInfo_.h>
#endif
#undef IL2CPP_STRUCT_RecorderPlaybackUIInspector__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUIInspector__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecorderPlaybackUIInspector__Fields_FWDDECL)
#include <Modloader/app/structs/RecorderPlaybackUIInspector__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderPlaybackUIInspector__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
