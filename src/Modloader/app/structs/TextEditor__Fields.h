#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextEditor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextEditor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextEditor__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/TextEditor_DblClickSnapping__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_TextEditor_DblClickSnapping__Enum_DEFINED)
#define IL2CPP_STRUCT_TextEditor__Fields_DEFINED
struct TouchScreenKeyboard;
struct GUIStyle;
struct GUIContent;
struct String;
struct __declspec(align(8)) TextEditor__Fields {
    struct TouchScreenKeyboard* keyboardOnScreen;
    int32_t controlID;
    struct GUIStyle* style;
    bool multiline;
    bool hasHorizontalCursorPos;
    bool isPasswordField;
    bool m_HasFocus;
    struct Vector2 scrollOffset;
    struct GUIContent* m_Content;
    struct Rect m_Position;
    int32_t m_CursorIndex;
    int32_t m_SelectIndex;
    bool m_RevealCursor;
    struct Vector2 graphicalCursorPos;
    struct Vector2 graphicalSelectCursorPos;
    bool m_MouseDragSelectsWholeWords;
    int32_t m_DblClickInitPos;
    TextEditor_DblClickSnapping__Enum m_DblClickSnap;

    bool m_bJustSelected;
    int32_t m_iAltCursorPos;
    struct String* oldText;
    int32_t oldPos;
    int32_t oldSelectPos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextEditor__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextEditor__Fields_FWDDECL
#include <Modloader/app/structs/GUIContent.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TouchScreenKeyboard.h>
#endif
#undef IL2CPP_STRUCT_TextEditor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextEditor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextEditor__Fields_FWDDECL)
#include <Modloader/app/structs/TextEditor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextEditor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
