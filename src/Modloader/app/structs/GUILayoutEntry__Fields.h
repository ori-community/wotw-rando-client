#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUILayoutEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUILayoutEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutEntry__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_GUILayoutEntry__Fields_DEFINED
struct GUIStyle;
struct __declspec(align(8)) GUILayoutEntry__Fields {
    float minWidth;
    float maxWidth;
    float minHeight;
    float maxHeight;
    struct Rect rect;
    int32_t stretchWidth;
    int32_t stretchHeight;
    bool consideredForMargin;
    struct GUIStyle* m_Style;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUILayoutEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_GUILayoutEntry__Fields_FWDDECL
#include <Modloader/app/structs/GUIStyle.h>
#endif
#undef IL2CPP_STRUCT_GUILayoutEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GUILayoutEntry__Fields_FWDDECL)
#include <Modloader/app/structs/GUILayoutEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUILayoutEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
