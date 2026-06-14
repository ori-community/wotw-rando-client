#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIScrollGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIScrollGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIScrollGroup__Fields_DEFINED)
#include <Modloader/app/structs/GUILayoutGroup__Fields.h>
#if defined(IL2CPP_STRUCT_GUILayoutGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_GUIScrollGroup__Fields_DEFINED
struct GUIStyle;
struct GUIScrollGroup__Fields {
    struct GUILayoutGroup__Fields _;
    float calcMinWidth;
    float calcMaxWidth;
    float calcMinHeight;
    float calcMaxHeight;
    float clientWidth;
    float clientHeight;
    bool allowHorizontalScroll;
    bool allowVerticalScroll;
    bool needsHorizontalScrollbar;
    bool needsVerticalScrollbar;
    struct GUIStyle* horizontalScrollbar;
    struct GUIStyle* verticalScrollbar;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUIScrollGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_GUIScrollGroup__Fields_FWDDECL
#include <Modloader/app/structs/GUIStyle.h>
#endif
#undef IL2CPP_STRUCT_GUIScrollGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIScrollGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GUIScrollGroup__Fields_FWDDECL)
#include <Modloader/app/structs/GUIScrollGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIScrollGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
