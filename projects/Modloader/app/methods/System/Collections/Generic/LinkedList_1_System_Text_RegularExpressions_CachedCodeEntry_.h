#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CachedCodeEntry.h>
#include <Modloader/app/structs/LinkedListNode_1_System_Text_RegularExpressions_CachedCodeEntry_.h>
#include <Modloader/app/structs/LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_.h>

namespace app::classes::System::Collections::Generic::LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x002FA280,
        app::LinkedListNode_1_System_Text_RegularExpressions_CachedCodeEntry_*,
        get_First,
        app::LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x018E76D0,
        void,
        Remove,
        app::LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_* this_ptr,
        app::LinkedListNode_1_System_Text_RegularExpressions_CachedCodeEntry_* node
    )
    IL2CPP_REGISTER_METHOD(
        0x018E6F50,
        void,
        AddFirst_1,
        app::LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_* this_ptr,
        app::LinkedListNode_1_System_Text_RegularExpressions_CachedCodeEntry_* node
    )
    IL2CPP_REGISTER_METHOD(
        0x018E6DF0,
        app::LinkedListNode_1_System_Text_RegularExpressions_CachedCodeEntry_*,
        AddFirst_2,
        app::LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_* this_ptr,
        app::CachedCodeEntry* value
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E7740, void, RemoveLast, app::LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_* this_ptr)
} // namespace app::classes::System::Collections::Generic::LinkedList_1_System_Text_RegularExpressions_CachedCodeEntry_
