#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUISkin__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUISkin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUISkin__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_GUISkin__Fields_DEFINED
struct Font;
struct GUIStyle;
struct GUIStyle__Array;
struct GUISettings;
struct Dictionary_2_System_String_UnityEngine_GUIStyle_;
struct GUISkin__Fields {
    struct ScriptableObject__Fields _;
    struct Font* m_Font;
    struct GUIStyle* m_box;
    struct GUIStyle* m_button;
    struct GUIStyle* m_toggle;
    struct GUIStyle* m_label;
    struct GUIStyle* m_textField;
    struct GUIStyle* m_textArea;
    struct GUIStyle* m_window;
    struct GUIStyle* m_horizontalSlider;
    struct GUIStyle* m_horizontalSliderThumb;
    struct GUIStyle* m_verticalSlider;
    struct GUIStyle* m_verticalSliderThumb;
    struct GUIStyle* m_horizontalScrollbar;
    struct GUIStyle* m_horizontalScrollbarThumb;
    struct GUIStyle* m_horizontalScrollbarLeftButton;
    struct GUIStyle* m_horizontalScrollbarRightButton;
    struct GUIStyle* m_verticalScrollbar;
    struct GUIStyle* m_verticalScrollbarThumb;
    struct GUIStyle* m_verticalScrollbarUpButton;
    struct GUIStyle* m_verticalScrollbarDownButton;
    struct GUIStyle* m_ScrollView;
    struct GUIStyle__Array* m_CustomStyles;
    struct GUISettings* m_Settings;
    struct Dictionary_2_System_String_UnityEngine_GUIStyle_* m_Styles;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUISkin__Fields_FWDDECL)
#define IL2CPP_STRUCT_GUISkin__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_UnityEngine_GUIStyle_.h>
#include <Modloader/app/structs/Font.h>
#include <Modloader/app/structs/GUISettings.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/GUIStyle__Array.h>
#endif
#undef IL2CPP_STRUCT_GUISkin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUISkin__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GUISkin__Fields_FWDDECL)
#include <Modloader/app/structs/GUISkin__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUISkin__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
