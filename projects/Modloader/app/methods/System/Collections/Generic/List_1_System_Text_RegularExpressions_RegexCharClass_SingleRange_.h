#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IComparer_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_.h>
#include <Modloader/app/structs/List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_.h>
#include <Modloader/app/structs/RegexCharClass_SingleRange.h>

namespace app::classes::System::Collections::Generic::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, app::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_* this_ptr,
        app::RegexCharClass_SingleRange* item
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::RegexCharClass_SingleRange*,
        get_Item,
        app::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAE20,
        void,
        Sort,
        app::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_* this_ptr,
        int32_t index,
        int32_t count,
        app::IComparer_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x025EFC80,
        void,
        set_Item,
        app::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_* this_ptr,
        int32_t index,
        app::RegexCharClass_SingleRange* value
    )
    IL2CPP_REGISTER_METHOD(
        0x025EABD0,
        void,
        RemoveRange,
        app::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_* this_ptr,
        int32_t index,
        int32_t count
    )
} // namespace app::classes::System::Collections::Generic::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
