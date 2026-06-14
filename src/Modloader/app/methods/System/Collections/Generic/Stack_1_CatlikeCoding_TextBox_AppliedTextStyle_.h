#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AppliedTextStyle.h>
#include <Modloader/app/structs/AppliedTextStyle__Array.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_CatlikeCoding_TextBox_AppliedTextStyle_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_.h>
#include <Modloader/app/structs/Stack_1_T_Enumerator_CatlikeCoding_TextBox_AppliedTextStyle_.h>

namespace app::classes::System::Collections::Generic::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF5CC0, app::AppliedTextStyle, Pop, app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF5DE0, void, Push, app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr, app::AppliedTextStyle item)
    IL2CPP_REGISTER_METHOD(0x02031F00, void, Clear, app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor_1, app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF5570, void, ctor_2, app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF56A0, app::Object*, ICollection_get_SyncRoot, app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF5800, bool, Contains, app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr, app::AppliedTextStyle item)
    IL2CPP_REGISTER_METHOD(
        0x02CF5860,
        void,
        ICollection_CopyTo,
        app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr,
        app::Array* array,
        int32_t array_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02CF5B00,
        app::Stack_1_T_Enumerator_CatlikeCoding_TextBox_AppliedTextStyle_,
        GetEnumerator,
        app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02CF5B60,
        app::IEnumerator_1_CatlikeCoding_TextBox_AppliedTextStyle_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator,
        app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02CF5B60, app::IEnumerator*, IEnumerable_GetEnumerator, app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF5C30, app::AppliedTextStyle, Peek, app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF5ED0, app::AppliedTextStyle__Array*, ToArray, app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF5FF0, void, ThrowForEmptyStack, app::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Stack_1_CatlikeCoding_TextBox_AppliedTextStyle_
