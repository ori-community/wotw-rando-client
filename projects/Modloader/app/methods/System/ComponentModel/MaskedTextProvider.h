#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/MaskedTextProvider.h>
#include <Modloader/app/structs/MaskedTextProvider_CharDescriptor.h>
#include <Modloader/app/structs/MaskedTextProvider_CharType__Enum.h>
#include <Modloader/app/structs/MaskedTextResultHint__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::MaskedTextProvider {
    IL2CPP_REGISTER_METHOD(0x01FF6640, void, ctor_1, app::MaskedTextProvider* this_ptr, app::String* mask)
    IL2CPP_REGISTER_METHOD(0x01FF6670, void, ctor_2, app::MaskedTextProvider* this_ptr, app::String* mask, bool restrict_to_ascii)
    IL2CPP_REGISTER_METHOD(0x01FF66B0, void, ctor_3, app::MaskedTextProvider* this_ptr, app::String* mask, app::CultureInfo* culture)
    IL2CPP_REGISTER_METHOD(0x01FF66E0, void, ctor_4, app::MaskedTextProvider* this_ptr, app::String* mask, app::CultureInfo* culture, bool restrict_to_ascii)
    IL2CPP_REGISTER_METHOD(0x01FF6710, void, ctor_5, app::MaskedTextProvider* this_ptr, app::String* mask, char16_t password_char, bool allow_prompt_as_input)
    IL2CPP_REGISTER_METHOD(
        0x01FF6740,
        void,
        ctor_6,
        app::MaskedTextProvider* this_ptr,
        app::String* mask,
        app::CultureInfo* culture,
        char16_t password_char,
        bool allow_prompt_as_input
    )
    IL2CPP_REGISTER_METHOD(
        0x01FF6780,
        void,
        ctor_7,
        app::MaskedTextProvider* this_ptr,
        app::String* mask,
        app::CultureInfo* culture,
        bool allow_prompt_as_input,
        char16_t prompt_char,
        char16_t password_char,
        bool restrict_to_ascii
    )
    IL2CPP_REGISTER_METHOD(0x01FF6BC0, void, Initialize, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF72A0, bool, get_AllowPromptAsInput, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_AssignedEditPositionCount, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF7360, int32_t, get_AvailableEditPositionCount, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF7370, app::Object*, Clone, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::CultureInfo*, get_Culture, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D6E50, char16_t, get_DefaultPasswordChar, )
    IL2CPP_REGISTER_METHOD(0x01FF7B70, int32_t, get_EditPositionCount, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF7B80, app::IEnumerator*, get_EditPositions, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF7F40, bool, get_IncludeLiterals, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF8000, void, set_IncludeLiterals, app::MaskedTextProvider* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01FF80D0, bool, get_IncludePrompt, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF8190, void, set_IncludePrompt, app::MaskedTextProvider* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01FF8260, bool, get_AsciiOnly, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF8320, bool, get_IsPassword, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF8330, void, set_IsPassword, app::MaskedTextProvider* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, get_InvalidIndex, )
    IL2CPP_REGISTER_METHOD(0x01FF83F0, int32_t, get_LastAssignedPosition, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF8440, int32_t, get_Length, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_Mask, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF8460, bool, get_MaskCompleted, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF8470, bool, get_MaskFull, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF8480, char16_t, get_PasswordChar, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF8490, void, set_PasswordChar, app::MaskedTextProvider* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x01FF8650, char16_t, get_PromptChar, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF8660, void, set_PromptChar, app::MaskedTextProvider* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x01FF8860, bool, get_ResetOnPrompt, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF8920, void, set_ResetOnPrompt, app::MaskedTextProvider* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01FF89F0, bool, get_ResetOnSpace, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF8AB0, void, set_ResetOnSpace, app::MaskedTextProvider* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01FF8B80, bool, get_SkipLiterals, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF8C40, void, set_SkipLiterals, app::MaskedTextProvider* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01FF8D10, char16_t, get_Item, app::MaskedTextProvider* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01FF8E30, bool, Add_1, app::MaskedTextProvider* this_ptr, char16_t input)
    IL2CPP_REGISTER_METHOD(
        0x01FF8F20,
        bool,
        Add_2,
        app::MaskedTextProvider* this_ptr,
        char16_t input,
        int32_t* test_position,
        app::MaskedTextResultHint__Enum* result_hint
    )
    IL2CPP_REGISTER_METHOD(0x01FF9060, bool, Add_3, app::MaskedTextProvider* this_ptr, app::String* input)
    IL2CPP_REGISTER_METHOD(
        0x01FF91A0,
        bool,
        Add_4,
        app::MaskedTextProvider* this_ptr,
        app::String* input,
        int32_t* test_position,
        app::MaskedTextResultHint__Enum* result_hint
    )
    IL2CPP_REGISTER_METHOD(0x01FF92F0, void, Clear_1, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FF9310, void, Clear_2, app::MaskedTextProvider* this_ptr, app::MaskedTextResultHint__Enum* result_hint)
    IL2CPP_REGISTER_METHOD(0x01FF9480, int32_t, FindAssignedEditPositionFrom, app::MaskedTextProvider* this_ptr, int32_t position, bool direction)
    IL2CPP_REGISTER_METHOD(
        0x01FF94E0,
        int32_t,
        FindAssignedEditPositionInRange,
        app::MaskedTextProvider* this_ptr,
        int32_t start_position,
        int32_t end_position,
        bool direction
    )
    IL2CPP_REGISTER_METHOD(0x01FF9510, int32_t, FindEditPositionFrom, app::MaskedTextProvider* this_ptr, int32_t position, bool direction)
    IL2CPP_REGISTER_METHOD(
        0x01FF9560,
        int32_t,
        FindEditPositionInRange_1,
        app::MaskedTextProvider* this_ptr,
        int32_t start_position,
        int32_t end_position,
        bool direction
    )
    IL2CPP_REGISTER_METHOD(
        0x01FF9580,
        int32_t,
        FindEditPositionInRange_2,
        app::MaskedTextProvider* this_ptr,
        int32_t start_position,
        int32_t end_position,
        bool direction,
        uint8_t assigned_status
    )
    IL2CPP_REGISTER_METHOD(0x01FF9710, int32_t, FindNonEditPositionFrom, app::MaskedTextProvider* this_ptr, int32_t position, bool direction)
    IL2CPP_REGISTER_METHOD(
        0x01FF9760,
        int32_t,
        FindNonEditPositionInRange,
        app::MaskedTextProvider* this_ptr,
        int32_t start_position,
        int32_t end_position,
        bool direction
    )
    IL2CPP_REGISTER_METHOD(
        0x01FF9780,
        int32_t,
        FindPositionInRange,
        app::MaskedTextProvider* this_ptr,
        int32_t start_position,
        int32_t end_position,
        bool direction,
        app::MaskedTextProvider_CharType__Enum char_type_flags
    )
    IL2CPP_REGISTER_METHOD(0x01FF98D0, int32_t, FindUnassignedEditPositionFrom, app::MaskedTextProvider* this_ptr, int32_t position, bool direction)
    IL2CPP_REGISTER_METHOD(
        0x01FF9920,
        int32_t,
        FindUnassignedEditPositionInRange,
        app::MaskedTextProvider* this_ptr,
        int32_t start_position,
        int32_t end_position,
        bool direction
    )
    IL2CPP_REGISTER_METHOD(0x01FF9AB0, bool, GetOperationResultFromHint, app::MaskedTextResultHint__Enum hint)
    IL2CPP_REGISTER_METHOD(0x01FF9AC0, bool, InsertAt_1, app::MaskedTextProvider* this_ptr, char16_t input, int32_t position)
    IL2CPP_REGISTER_METHOD(
        0x01FF9B50,
        bool,
        InsertAt_2,
        app::MaskedTextProvider* this_ptr,
        char16_t input,
        int32_t position,
        int32_t* test_position,
        app::MaskedTextResultHint__Enum* result_hint
    )
    IL2CPP_REGISTER_METHOD(0x01FF9BA0, bool, InsertAt_3, app::MaskedTextProvider* this_ptr, app::String* input, int32_t position)
    IL2CPP_REGISTER_METHOD(
        0x01FF9BD0,
        bool,
        InsertAt_4,
        app::MaskedTextProvider* this_ptr,
        app::String* input,
        int32_t position,
        int32_t* test_position,
        app::MaskedTextResultHint__Enum* result_hint
    )
    IL2CPP_REGISTER_METHOD(
        0x01FF9D00,
        bool,
        InsertAtInt,
        app::MaskedTextProvider* this_ptr,
        app::String* input,
        int32_t position,
        int32_t* test_position,
        app::MaskedTextResultHint__Enum* result_hint,
        bool test_only
    )
    IL2CPP_REGISTER_METHOD(0x01FFA1B0, bool, IsAscii, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01FFA1D0, bool, IsAciiAlphanumeric, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01FFA200, bool, IsAlphanumeric, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01FFA2D0, bool, IsAsciiLetter, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01FFA2F0, bool, IsAvailablePosition, app::MaskedTextProvider* this_ptr, int32_t position)
    IL2CPP_REGISTER_METHOD(0x01FFA400, bool, IsEditPosition_1, app::MaskedTextProvider* this_ptr, int32_t position)
    IL2CPP_REGISTER_METHOD(0x01FFA520, bool, IsEditPosition_2, app::MaskedTextProvider_CharDescriptor* char_descriptor)
    IL2CPP_REGISTER_METHOD(0x01FFA550, bool, IsLiteralPosition, app::MaskedTextProvider_CharDescriptor* char_descriptor)
    IL2CPP_REGISTER_METHOD(0x01FFA580, bool, IsPrintableChar, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01FFA8A0, bool, IsValidInputChar, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01FFA940, bool, IsValidMaskChar, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01FFA9E0, bool, IsValidPasswordChar, char16_t c)
    IL2CPP_REGISTER_METHOD(0x01FFAA90, bool, Remove_1, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFAAF0, bool, Remove_2, app::MaskedTextProvider* this_ptr, int32_t* test_position, app::MaskedTextResultHint__Enum* result_hint)
    IL2CPP_REGISTER_METHOD(0x01FFAB90, bool, RemoveAt_1, app::MaskedTextProvider* this_ptr, int32_t position)
    IL2CPP_REGISTER_METHOD(0x01FFABF0, bool, RemoveAt_2, app::MaskedTextProvider* this_ptr, int32_t start_position, int32_t end_position)
    IL2CPP_REGISTER_METHOD(
        0x01FFAC50,
        bool,
        RemoveAt_3,
        app::MaskedTextProvider* this_ptr,
        int32_t start_position,
        int32_t end_position,
        int32_t* test_position,
        app::MaskedTextResultHint__Enum* result_hint
    )
    IL2CPP_REGISTER_METHOD(
        0x01FFACD0,
        bool,
        RemoveAtInt,
        app::MaskedTextProvider* this_ptr,
        int32_t start_position,
        int32_t end_position,
        int32_t* test_position,
        app::MaskedTextResultHint__Enum* result_hint,
        bool test_only
    )
    IL2CPP_REGISTER_METHOD(0x01FFB130, bool, Replace_1, app::MaskedTextProvider* this_ptr, char16_t input, int32_t position)
    IL2CPP_REGISTER_METHOD(
        0x01FFB210,
        bool,
        Replace_2,
        app::MaskedTextProvider* this_ptr,
        char16_t input,
        int32_t position,
        int32_t* test_position,
        app::MaskedTextResultHint__Enum* result_hint
    )
    IL2CPP_REGISTER_METHOD(
        0x01FFB310,
        bool,
        Replace_3,
        app::MaskedTextProvider* this_ptr,
        char16_t input,
        int32_t start_position,
        int32_t end_position,
        int32_t* test_position,
        app::MaskedTextResultHint__Enum* result_hint
    )
    IL2CPP_REGISTER_METHOD(0x01FFB3F0, bool, Replace_4, app::MaskedTextProvider* this_ptr, app::String* input, int32_t position)
    IL2CPP_REGISTER_METHOD(
        0x01FFB520,
        bool,
        Replace_5,
        app::MaskedTextProvider* this_ptr,
        app::String* input,
        int32_t position,
        int32_t* test_position,
        app::MaskedTextResultHint__Enum* result_hint
    )
    IL2CPP_REGISTER_METHOD(
        0x01FFB670,
        bool,
        Replace_6,
        app::MaskedTextProvider* this_ptr,
        app::String* input,
        int32_t start_position,
        int32_t end_position,
        int32_t* test_position,
        app::MaskedTextResultHint__Enum* result_hint
    )
    IL2CPP_REGISTER_METHOD(0x01FFBA60, void, ResetChar, app::MaskedTextProvider* this_ptr, int32_t test_position)
    IL2CPP_REGISTER_METHOD(0x01FFBB60, void, ResetString, app::MaskedTextProvider* this_ptr, int32_t start_position, int32_t end_position)
    IL2CPP_REGISTER_METHOD(0x01FFBD50, bool, Set_1, app::MaskedTextProvider* this_ptr, app::String* input)
    IL2CPP_REGISTER_METHOD(
        0x01FFBEF0,
        bool,
        Set_2,
        app::MaskedTextProvider* this_ptr,
        app::String* input,
        int32_t* test_position,
        app::MaskedTextResultHint__Enum* result_hint
    )
    IL2CPP_REGISTER_METHOD(0x01FFC080, void, SetChar_1, app::MaskedTextProvider* this_ptr, char16_t input, int32_t position)
    IL2CPP_REGISTER_METHOD(
        0x01FFC150,
        void,
        SetChar_2,
        app::MaskedTextProvider* this_ptr,
        char16_t input,
        int32_t position,
        app::MaskedTextProvider_CharDescriptor* char_descriptor
    )
    IL2CPP_REGISTER_METHOD(0x01FFC3A0, void, SetString, app::MaskedTextProvider* this_ptr, app::String* input, int32_t test_position)
    IL2CPP_REGISTER_METHOD(
        0x01FFC470,
        bool,
        TestChar,
        app::MaskedTextProvider* this_ptr,
        char16_t input,
        int32_t position,
        app::MaskedTextResultHint__Enum* result_hint
    )
    IL2CPP_REGISTER_METHOD(0x01FFCA00, bool, TestEscapeChar_1, app::MaskedTextProvider* this_ptr, char16_t input, int32_t position)
    IL2CPP_REGISTER_METHOD(
        0x01FFCAD0,
        bool,
        TestEscapeChar_2,
        app::MaskedTextProvider* this_ptr,
        char16_t input,
        int32_t position,
        app::MaskedTextProvider_CharDescriptor* char_dex
    )
    IL2CPP_REGISTER_METHOD(
        0x01FFCC00,
        bool,
        TestSetChar,
        app::MaskedTextProvider* this_ptr,
        char16_t input,
        int32_t position,
        app::MaskedTextResultHint__Enum* result_hint
    )
    IL2CPP_REGISTER_METHOD(
        0x01FFCC70,
        bool,
        TestSetString,
        app::MaskedTextProvider* this_ptr,
        app::String* input,
        int32_t position,
        int32_t* test_position,
        app::MaskedTextResultHint__Enum* result_hint
    )
    IL2CPP_REGISTER_METHOD(
        0x01FFCCE0,
        bool,
        TestString,
        app::MaskedTextProvider* this_ptr,
        app::String* input,
        int32_t position,
        int32_t* test_position,
        app::MaskedTextResultHint__Enum* result_hint
    )
    IL2CPP_REGISTER_METHOD(0x01FFCE50, app::String*, ToDisplayString, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFD100, app::String*, ToString_1, app::MaskedTextProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFD170, app::String*, ToString_2, app::MaskedTextProvider* this_ptr, bool ignore_password_char)
    IL2CPP_REGISTER_METHOD(0x01FFD1F0, app::String*, ToString_3, app::MaskedTextProvider* this_ptr, int32_t start_position, int32_t length)
    IL2CPP_REGISTER_METHOD(
        0x01FFD260,
        app::String*,
        ToString_4,
        app::MaskedTextProvider* this_ptr,
        bool ignore_password_char,
        int32_t start_position,
        int32_t length
    )
    IL2CPP_REGISTER_METHOD(0x01FFD2E0, app::String*, ToString_5, app::MaskedTextProvider* this_ptr, bool include_prompt, bool include_literals)
    IL2CPP_REGISTER_METHOD(
        0x01FFD320,
        app::String*,
        ToString_6,
        app::MaskedTextProvider* this_ptr,
        bool include_prompt,
        bool include_literals,
        int32_t start_position,
        int32_t length
    )
    IL2CPP_REGISTER_METHOD(
        0x01FFD350,
        app::String*,
        ToString_7,
        app::MaskedTextProvider* this_ptr,
        bool ignore_password_char,
        bool include_prompt,
        bool include_literals,
        int32_t start_position,
        int32_t length
    )
    IL2CPP_REGISTER_METHOD(
        0x01FFD790,
        bool,
        VerifyChar,
        app::MaskedTextProvider* this_ptr,
        char16_t input,
        int32_t position,
        app::MaskedTextResultHint__Enum* hint
    )
    IL2CPP_REGISTER_METHOD(0x01FFD7E0, bool, VerifyEscapeChar, app::MaskedTextProvider* this_ptr, char16_t input, int32_t position)
    IL2CPP_REGISTER_METHOD(0x01FFD820, bool, VerifyString_1, app::MaskedTextProvider* this_ptr, app::String* input)
    IL2CPP_REGISTER_METHOD(
        0x01FFD860,
        bool,
        VerifyString_2,
        app::MaskedTextProvider* this_ptr,
        app::String* input,
        int32_t* test_position,
        app::MaskedTextResultHint__Enum* result_hint
    )
    IL2CPP_REGISTER_METHOD(0x01FFD8A0, void, cctor, )
} // namespace app::classes::System::ComponentModel::MaskedTextProvider
