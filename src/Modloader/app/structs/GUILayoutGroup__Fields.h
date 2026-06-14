#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUILayoutGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUILayoutGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutGroup__Fields_DEFINED)
#include <Modloader/app/structs/GUILayoutEntry__Fields.h>
#if defined(IL2CPP_STRUCT_GUILayoutEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_GUILayoutGroup__Fields_DEFINED
struct List_1_UnityEngine_GUILayoutEntry_;
struct GUILayoutGroup__Fields {
    struct GUILayoutEntry__Fields _;
    struct List_1_UnityEngine_GUILayoutEntry_* entries;
    bool isVertical;
    bool resetCoords;
    float spacing;
    bool sameSize;
    bool isWindow;
    int32_t windowID;
    int32_t m_Cursor;
    int32_t m_StretchableCountX;
    int32_t m_StretchableCountY;
    bool m_UserSpecifiedWidth;
    bool m_UserSpecifiedHeight;
    float m_ChildMinWidth;
    float m_ChildMaxWidth;
    float m_ChildMinHeight;
    float m_ChildMaxHeight;
    int32_t m_MarginLeft;
    int32_t m_MarginRight;
    int32_t m_MarginTop;
    int32_t m_MarginBottom;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUILayoutGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_GUILayoutGroup__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_GUILayoutEntry_.h>
#endif
#undef IL2CPP_STRUCT_GUILayoutGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GUILayoutGroup__Fields_FWDDECL)
#include <Modloader/app/structs/GUILayoutGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUILayoutGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
