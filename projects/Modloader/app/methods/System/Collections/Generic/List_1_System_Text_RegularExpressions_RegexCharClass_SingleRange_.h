#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_.h>
#include <Modloader/app/structs/RegexCharClass_SingleRange.h>
#include <Modloader/app/structs/IComparer_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04786FD0, List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ * this_ptr, app::RegexCharClass_SingleRange* item))
    IL2CPP_REGISTER_METHODINFO(0x0471C140, List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475B5F8, List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::RegexCharClass_SingleRange*, get_Item, (app::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473A060, List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAE20, void, Sort, (app::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ * this_ptr, int32_t index, int32_t count, app::IComparer_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047566B8, List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, (app::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ * this_ptr, int32_t index, app::RegexCharClass_SingleRange* value))
    IL2CPP_REGISTER_METHODINFO(0x0472AC00, List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, (app::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ * this_ptr, int32_t index, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x047335A0, List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__RemoveRange__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
