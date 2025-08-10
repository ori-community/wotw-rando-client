#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Text_RegularExpressions_RegexNode_.h>
#include <Modloader/app/structs/List_1_System_Text_RegularExpressions_RegexNode_.h>
#include <Modloader/app/structs/RegexNode.h>

namespace app::classes::System::Collections::Generic::List_1_System_Text_RegularExpressions_RegexNode_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_System_Text_RegularExpressions_RegexNode_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::RegexNode*, get_Item, app::List_1_System_Text_RegularExpressions_RegexNode_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025EACE0, void, Reverse, app::List_1_System_Text_RegularExpressions_RegexNode_* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, app::List_1_System_Text_RegularExpressions_RegexNode_* this_ptr, int32_t index, app::RegexNode* value)
    IL2CPP_REGISTER_METHOD(
        0x02FE94A0,
        void,
        InsertRange,
        app::List_1_System_Text_RegularExpressions_RegexNode_* this_ptr,
        int32_t index,
        app::IEnumerable_1_System_Text_RegularExpressions_RegexNode_* collection
    )
    IL2CPP_REGISTER_METHOD(0x025EABD0, void, RemoveRange, app::List_1_System_Text_RegularExpressions_RegexNode_* this_ptr, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, app::List_1_System_Text_RegularExpressions_RegexNode_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_Text_RegularExpressions_RegexNode_* this_ptr, app::RegexNode* item)
} // namespace app::classes::System::Collections::Generic::List_1_System_Text_RegularExpressions_RegexNode_
