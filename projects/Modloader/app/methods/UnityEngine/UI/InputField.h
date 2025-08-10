#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseEventData.h>
#include <Modloader/app/structs/BaseInput.h>
#include <Modloader/app/structs/CanvasUpdate__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Event.h>
#include <Modloader/app/structs/Graphic.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/InputField.h>
#include <Modloader/app/structs/InputField_CharacterValidation__Enum.h>
#include <Modloader/app/structs/InputField_ContentType__Enum.h>
#include <Modloader/app/structs/InputField_ContentType__Enum__Array.h>
#include <Modloader/app/structs/InputField_EditState__Enum.h>
#include <Modloader/app/structs/InputField_InputType__Enum.h>
#include <Modloader/app/structs/InputField_LineType__Enum.h>
#include <Modloader/app/structs/InputField_OnChangeEvent.h>
#include <Modloader/app/structs/InputField_OnValidateInput.h>
#include <Modloader/app/structs/InputField_SubmitEvent.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/Selectable_SelectionState__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Text.h>
#include <Modloader/app/structs/TextGenerator.h>
#include <Modloader/app/structs/TouchScreenKeyboard.h>
#include <Modloader/app/structs/TouchScreenKeyboardType__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/VertexHelper.h>

namespace app::classes::UnityEngine::UI::InputField {
    IL2CPP_REGISTER_METHOD(0x024C0BE0, void, ctor, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C10C0, app::BaseInput*, get_input, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C1240, app::String*, get_compositionString, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C1370, app::Mesh*, get_mesh, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C1510, app::TextGenerator*, get_cachedInputTextGenerator, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C1680, void, set_shouldHideMobileInput, app::InputField* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x024C1750, bool, get_shouldHideMobileInput, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C17C0, bool, get_shouldActivateOnSelect, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C1810, app::String*, get_text, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C1820, void, set_text, app::InputField* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x024C1C40, bool, get_isFocused, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C1C50, float, get_caretBlinkRate, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C1C60, void, set_caretBlinkRate, app::InputField* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x024C1D40, int32_t, get_caretWidth, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C1D50, void, set_caretWidth, app::InputField* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01F36B20, app::Text*, get_textComponent, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C1E20, void, set_textComponent, app::InputField* this_ptr, app::Text* value)
    IL2CPP_REGISTER_METHOD(0x01F36B40, app::Graphic*, get_placeholder, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C2520, void, set_placeholder, app::InputField* this_ptr, app::Graphic* value)
    IL2CPP_REGISTER_METHOD(0x024C25E0, app::Color, get_caretColor, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C2640, void, set_caretColor, app::InputField* this_ptr, app::Color value)
    IL2CPP_REGISTER_METHOD(0x024C26D0, bool, get_customCaretColor, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C26E0, void, set_customCaretColor, app::InputField* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x024C2700, app::Color, get_selectionColor, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C2710, void, set_selectionColor, app::InputField* this_ptr, app::Color value)
    IL2CPP_REGISTER_METHOD(0x01F36BF0, app::InputField_SubmitEvent*, get_onEndEdit, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C27A0, void, set_onEndEdit, app::InputField* this_ptr, app::InputField_SubmitEvent* value)
    IL2CPP_REGISTER_METHOD(0x024C2860, app::InputField_OnChangeEvent*, get_onValueChange, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C2870, void, set_onValueChange, app::InputField* this_ptr, app::InputField_OnChangeEvent* value)
    IL2CPP_REGISTER_METHOD(0x024C2860, app::InputField_OnChangeEvent*, get_onValueChanged, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C2870, void, set_onValueChanged, app::InputField* this_ptr, app::InputField_OnChangeEvent* value)
    IL2CPP_REGISTER_METHOD(0x024C2930, app::InputField_OnValidateInput*, get_onValidateInput, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C2940, void, set_onValidateInput, app::InputField* this_ptr, app::InputField_OnValidateInput* value)
    IL2CPP_REGISTER_METHOD(0x024C2A00, int32_t, get_characterLimit, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C2A10, void, set_characterLimit, app::InputField* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x024C2B10, app::InputField_ContentType__Enum, get_contentType, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C2B20, void, set_contentType, app::InputField* this_ptr, app::InputField_ContentType__Enum value)
    IL2CPP_REGISTER_METHOD(0x01F36C00, app::InputField_LineType__Enum, get_lineType, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C2D10, void, set_lineType, app::InputField* this_ptr, app::InputField_LineType__Enum value)
    IL2CPP_REGISTER_METHOD(0x024C2E40, app::InputField_InputType__Enum, get_inputType, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C2E50, void, set_inputType, app::InputField* this_ptr, app::InputField_InputType__Enum value)
    IL2CPP_REGISTER_METHOD(0x01F2BCB0, app::TouchScreenKeyboard*, get_touchScreenKeyboard, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C2F00, app::TouchScreenKeyboardType__Enum, get_keyboardType, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C2F10, void, set_keyboardType, app::InputField* this_ptr, app::TouchScreenKeyboardType__Enum value)
    IL2CPP_REGISTER_METHOD(0x024C2FC0, app::InputField_CharacterValidation__Enum, get_characterValidation, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C2FD0, void, set_characterValidation, app::InputField* this_ptr, app::InputField_CharacterValidation__Enum value)
    IL2CPP_REGISTER_METHOD(0x024C3080, bool, get_readOnly, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01173710, void, set_readOnly, app::InputField* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x024C3090, bool, get_multiLine, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C30B0, char16_t, get_asteriskChar, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C30C0, void, set_asteriskChar, app::InputField* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x024C31A0, bool, get_wasCanceled, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C31B0, void, ClampPos, app::InputField* this_ptr, int32_t* pos)
    IL2CPP_REGISTER_METHOD(0x024C3200, int32_t, get_caretPositionInternal, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C3230, void, set_caretPositionInternal, app::InputField* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x024C3280, int32_t, get_caretSelectPositionInternal, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C32B0, void, set_caretSelectPositionInternal, app::InputField* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x024C3300, bool, get_hasSelection, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C3280, int32_t, get_caretPosition, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C3370, void, set_caretPosition, app::InputField* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x024C3200, int32_t, get_selectionAnchorPosition, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C3450, void, set_selectionAnchorPosition, app::InputField* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x024C3280, int32_t, get_selectionFocusPosition, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C34D0, void, set_selectionFocusPosition, app::InputField* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x024C3550, void, OnEnable, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C3A30, void, OnDisable, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C3F20, app::IEnumerator*, CaretBlink, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C4070, void, SetCaretVisible, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C40F0, void, SetCaretActive, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C4290, void, UpdateCaretMaterial, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C4440, void, OnFocus, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C4450, void, SelectAll, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C44E0, void, MoveTextEnd, app::InputField* this_ptr, bool shift)
    IL2CPP_REGISTER_METHOD(0x024C4600, void, MoveTextStart, app::InputField* this_ptr, bool shift)
    IL2CPP_REGISTER_METHOD(0x024C46F0, app::String*, get_clipboard, )
    IL2CPP_REGISTER_METHOD(0x024C4740, void, set_clipboard, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01F1B650, bool, InPlaceEditing, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C4790, void, UpdateCaretFromKeyboard, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C4910, void, LateUpdate, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C49B0, app::Vector2, ScreenToLocal, app::InputField* this_ptr, app::Vector2 screen)
    IL2CPP_REGISTER_METHOD(
        0x024C4EF0,
        int32_t,
        GetUnclampedCharacterLineFromPosition,
        app::InputField* this_ptr,
        app::Vector2 pos,
        app::TextGenerator* generator
    )
    IL2CPP_REGISTER_METHOD(0x024C5140, int32_t, GetCharacterIndexFromPosition, app::InputField* this_ptr, app::Vector2 pos)
    IL2CPP_REGISTER_METHOD(0x024C5450, bool, MayDrag, app::InputField* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x024C5570, void, OnBeginDrag, app::InputField* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x024C55A0, void, OnDrag, app::InputField* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x024C5950, app::IEnumerator*, MouseDragOutsideRect, app::InputField* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x024C5AB0, void, OnEndDrag, app::InputField* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x024C5AE0, void, OnPointerDown, app::InputField* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x024C5D00, app::InputField_EditState__Enum, KeyPressed, app::InputField* this_ptr, app::Event* evt)
    IL2CPP_REGISTER_METHOD(0x024C6550, bool, IsValidChar, app::InputField* this_ptr, char16_t c)
    IL2CPP_REGISTER_METHOD(0x024C65B0, void, ProcessEvent, app::InputField* this_ptr, app::Event* e)
    IL2CPP_REGISTER_METHOD(0x024C65C0, void, OnUpdateSelected, app::InputField* this_ptr, app::BaseEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x024C6810, app::String*, GetSelectedString, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C6970, int32_t, FindtNextWordBegin, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C6B00, void, MoveRight, app::InputField* this_ptr, bool shift, bool ctrl)
    IL2CPP_REGISTER_METHOD(0x024C6DF0, int32_t, FindtPrevWordBegin, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C6F40, void, MoveLeft, app::InputField* this_ptr, bool shift, bool ctrl)
    IL2CPP_REGISTER_METHOD(0x024C7340, int32_t, DetermineCharacterLine, app::InputField* this_ptr, int32_t char_pos, app::TextGenerator* generator)
    IL2CPP_REGISTER_METHOD(0x024C7530, int32_t, LineUpCharacterPosition, app::InputField* this_ptr, int32_t original_pos, bool go_to_first_char)
    IL2CPP_REGISTER_METHOD(0x024C77B0, int32_t, LineDownCharacterPosition, app::InputField* this_ptr, int32_t original_pos, bool go_to_last_char)
    IL2CPP_REGISTER_METHOD(0x024C7AC0, void, MoveDown_1, app::InputField* this_ptr, bool shift)
    IL2CPP_REGISTER_METHOD(0x024C7AD0, void, MoveDown_2, app::InputField* this_ptr, bool shift, bool go_to_last_char)
    IL2CPP_REGISTER_METHOD(0x024C7DF0, void, MoveUp_1, app::InputField* this_ptr, bool shift)
    IL2CPP_REGISTER_METHOD(0x024C7E00, void, MoveUp_2, app::InputField* this_ptr, bool shift, bool go_to_first_char)
    IL2CPP_REGISTER_METHOD(0x024C8100, void, Delete, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C8420, void, ForwardSpace, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C8520, void, Backspace, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C8650, void, Insert, app::InputField* this_ptr, char16_t c)
    IL2CPP_REGISTER_METHOD(0x024C87B0, void, SendOnValueChangedAndUpdateLabel, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C87D0, void, SendOnValueChanged, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C88C0, void, SendOnSubmit, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C89B0, void, Append_1, app::InputField* this_ptr, app::String* input)
    IL2CPP_REGISTER_METHOD(0x024C8A50, void, Append_2, app::InputField* this_ptr, char16_t input)
    IL2CPP_REGISTER_METHOD(0x024C8C20, void, UpdateLabel, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C9110, bool, IsSelectionVisible, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C9200, int32_t, GetLineStartPosition, app::TextGenerator* gen, int32_t line)
    IL2CPP_REGISTER_METHOD(0x024C9390, int32_t, GetLineEndPosition, app::TextGenerator* gen, int32_t line)
    IL2CPP_REGISTER_METHOD(0x024C9560, void, SetDrawRangeToContainCaretPosition, app::InputField* this_ptr, int32_t caret_pos)
    IL2CPP_REGISTER_METHOD(0x024C9D40, void, ForceLabelUpdate, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C9D50, void, MarkGeometryAsDirty, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C9DF0, void, Rebuild, app::InputField* this_ptr, app::CanvasUpdate__Enum update)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LayoutComplete, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GraphicUpdateComplete, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024C9E00, void, UpdateGeometry, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024CA390, void, AssignPositioningIfNeeded, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024CAF50, void, OnFillVBO, app::InputField* this_ptr, app::Mesh* vbo)
    IL2CPP_REGISTER_METHOD(0x024CB1E0, void, GenerateCaret, app::InputField* this_ptr, app::VertexHelper* vbo, app::Vector2 rounding_offset)
    IL2CPP_REGISTER_METHOD(0x024CBEB0, void, CreateCursorVerts, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024CC090, void, GenerateHightlight, app::InputField* this_ptr, app::VertexHelper* vbo, app::Vector2 rounding_offset)
    IL2CPP_REGISTER_METHOD(0x024CC960, char16_t, Validate, app::InputField* this_ptr, app::String* text, int32_t pos, char16_t ch)
    IL2CPP_REGISTER_METHOD(0x024CD0B0, void, ActivateInputField, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024CD200, void, ActivateInputFieldInternal, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024CD410, void, OnSelect, app::InputField* this_ptr, app::BaseEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x024CD4D0, void, OnPointerClick, app::InputField* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x024CD500, void, DeactivateInputField, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024CD790, void, OnDeselect, app::InputField* this_ptr, app::BaseEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x024CD810, void, OnSubmit, app::InputField* this_ptr, app::BaseEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x024CD860, void, EnforceContentType, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024CD9D0, void, EnforceTextHOverflow, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024CDAE0,
        void,
        SetToCustomIfContentTypeIsNot,
        app::InputField* this_ptr,
        app::InputField_ContentType__Enum__Array* allowed_content_types
    )
    IL2CPP_REGISTER_METHOD(0x024CDB50, void, SetToCustom, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024CDB70, void, DoStateTransition, app::InputField* this_ptr, app::Selectable_SelectionState__Enum state, bool instant)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CalculateLayoutInputHorizontal, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CalculateLayoutInputVertical, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF590, float, get_minWidth, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024CDBA0, float, get_preferredWidth, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF740, float, get_flexibleWidth, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF590, float, get_minHeight, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024CDDA0, float, get_preferredHeight, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024BF740, float, get_flexibleHeight, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024CE020, int32_t, get_layoutPriority, app::InputField* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024CE030, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, ICanvasElement_get_transform, app::InputField* this_ptr)
} // namespace app::classes::UnityEngine::UI::InputField
