#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_.h>
#include <Modloader/app/structs/LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState_.h>
#include <Modloader/app/structs/LinkedList_1_T_Enumerator_System_Net_WebConnectionGroup_ConnectionState_.h>
#include <Modloader/app/structs/WebConnectionGroup_ConnectionState.h>

namespace app::classes::System::Collections::Generic::LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState_*, get_First, (app::LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E76D0, void, Remove_1, (app::LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_ * this_ptr, app::LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState_* node))
    IL2CPP_REGISTER_METHOD(0x018E7580, app::LinkedList_1_T_Enumerator_System_Net_WebConnectionGroup_ConnectionState_, GetEnumerator, (app::LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E7660, bool, Remove_2, (app::LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_ * this_ptr, app::WebConnectionGroup_ConnectionState* value))
    IL2CPP_REGISTER_METHOD(0x018E6DF0, app::LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState_*, AddFirst, (app::LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_ * this_ptr, app::WebConnectionGroup_ConnectionState* value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6DB0, app::LinkedListNode_1_System_Net_WebConnectionGroup_ConnectionState_*, get_Last, (app::LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::LinkedList_1_System_Net_WebConnectionGroup_ConnectionState_
