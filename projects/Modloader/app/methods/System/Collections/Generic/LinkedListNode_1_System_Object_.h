#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkedListNode_1_System_Object_.h>
#include <Modloader/app/structs/LinkedList_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::LinkedListNode_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x018E6AD0, app::LinkedListNode_1_System_Object_*, get_Next, app::LinkedListNode_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Object*, get_Value, app::LinkedListNode_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6AB0, void, ctor, app::LinkedListNode_1_System_Object_* this_ptr, app::LinkedList_1_System_Object_* list, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x014524A0, void, Invalidate, app::LinkedListNode_1_System_Object_* this_ptr)
} // namespace app::classes::System::Collections::Generic::LinkedListNode_1_System_Object_
