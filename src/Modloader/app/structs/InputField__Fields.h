#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputField__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputField__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/InputField_CharacterValidation__Enum.h>
#include <Modloader/app/structs/InputField_ContentType__Enum.h>
#include <Modloader/app/structs/InputField_InputType__Enum.h>
#include <Modloader/app/structs/InputField_LineType__Enum.h>
#include <Modloader/app/structs/Selectable__Fields.h>
#include <Modloader/app/structs/TouchScreenKeyboardType__Enum.h>
#if defined(IL2CPP_STRUCT_Selectable__Fields_DEFINED) && defined(IL2CPP_STRUCT_InputField_ContentType__Enum_DEFINED) && defined(IL2CPP_STRUCT_InputField_InputType__Enum_DEFINED) && defined(IL2CPP_STRUCT_TouchScreenKeyboardType__Enum_DEFINED) && defined(IL2CPP_STRUCT_InputField_LineType__Enum_DEFINED) && defined(IL2CPP_STRUCT_InputField_CharacterValidation__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_InputField__Fields_DEFINED
struct TouchScreenKeyboard;
struct Text;
struct Graphic;
struct InputField_SubmitEvent;
struct InputField_OnChangeEvent;
struct InputField_OnValidateInput;
struct String;
struct RectTransform;
struct UIVertex__Array;
struct TextGenerator;
struct CanvasRenderer;
struct Mesh;
struct Coroutine;
struct WaitForSecondsRealtime;
struct Event;
struct InputField__Fields {
    struct Selectable__Fields _;
    struct TouchScreenKeyboard* m_Keyboard;
    struct Text* m_TextComponent;
    struct Graphic* m_Placeholder;
    InputField_ContentType__Enum m_ContentType;

    InputField_InputType__Enum m_InputType;

    uint16_t m_AsteriskChar;
    TouchScreenKeyboardType__Enum m_KeyboardType;

    InputField_LineType__Enum m_LineType;

    bool m_HideMobileInput;
    InputField_CharacterValidation__Enum m_CharacterValidation;

    int32_t m_CharacterLimit;
    struct InputField_SubmitEvent* m_OnEndEdit;
    struct InputField_OnChangeEvent* m_OnValueChanged;
    struct InputField_OnValidateInput* m_OnValidateInput;
    struct Color m_CaretColor;
    bool m_CustomCaretColor;
    struct Color m_SelectionColor;
    struct String* m_Text;
    float m_CaretBlinkRate;
    int32_t m_CaretWidth;
    bool m_ReadOnly;
    int32_t m_CaretPosition;
    int32_t m_CaretSelectPosition;
    struct RectTransform* caretRectTrans;
    struct UIVertex__Array* m_CursorVerts;
    struct TextGenerator* m_InputTextCache;
    struct CanvasRenderer* m_CachedInputRenderer;
    bool m_PreventFontCallback;
    struct Mesh* m_Mesh;
    bool m_AllowInput;
    bool m_ShouldActivateNextUpdate;
    bool m_UpdateDrag;
    bool m_DragPositionOutOfBounds;
    bool m_CaretVisible;
    struct Coroutine* m_BlinkCoroutine;
    float m_BlinkStartTime;
    int32_t m_DrawStart;
    int32_t m_DrawEnd;
    struct Coroutine* m_DragCoroutine;
    struct String* m_OriginalText;
    bool m_WasCanceled;
    bool m_HasDoneFocusTransition;
    struct WaitForSecondsRealtime* m_WaitForSecondsRealtime;
    struct Event* m_ProcessingEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputField__Fields_FWDDECL)
#define IL2CPP_STRUCT_InputField__Fields_FWDDECL
#include <Modloader/app/structs/CanvasRenderer.h>
#include <Modloader/app/structs/Coroutine.h>
#include <Modloader/app/structs/Event.h>
#include <Modloader/app/structs/Graphic.h>
#include <Modloader/app/structs/InputField_OnChangeEvent.h>
#include <Modloader/app/structs/InputField_OnValidateInput.h>
#include <Modloader/app/structs/InputField_SubmitEvent.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/RectTransform.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Text.h>
#include <Modloader/app/structs/TextGenerator.h>
#include <Modloader/app/structs/TouchScreenKeyboard.h>
#include <Modloader/app/structs/UIVertex__Array.h>
#include <Modloader/app/structs/WaitForSecondsRealtime.h>
#endif
#undef IL2CPP_STRUCT_InputField__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputField__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InputField__Fields_FWDDECL)
#include <Modloader/app/structs/InputField__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputField__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
