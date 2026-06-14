#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkedListNode_1_System_WeakReference_.h>
#include <Modloader/app/structs/LinkedList_1_System_WeakReference_.h>
#include <Modloader/app/structs/WeakReference.h>

namespace app::classes::System::Collections::Generic::LinkedList_1_System_WeakReference_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::LinkedList_1_System_WeakReference_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x018E6FE0,
        app::LinkedListNode_1_System_WeakReference_*,
        AddLast_1,
        app::LinkedList_1_System_WeakReference_* this_ptr,
        app::WeakReference* value
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::LinkedList_1_System_WeakReference_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::LinkedListNode_1_System_WeakReference_*, get_First, app::LinkedList_1_System_WeakReference_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E76D0, void, Remove, app::LinkedList_1_System_WeakReference_* this_ptr, app::LinkedListNode_1_System_WeakReference_* node)
    IL2CPP_REGISTER_METHOD(0x018E7130, void, AddLast_2, app::LinkedList_1_System_WeakReference_* this_ptr, app::LinkedListNode_1_System_WeakReference_* node)
} // namespace app::classes::System::Collections::Generic::LinkedList_1_System_WeakReference_
