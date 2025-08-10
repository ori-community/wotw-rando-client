#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_System_Object_.h>
#include <Modloader/app/structs/LinkedListNode_1_System_Object_.h>
#include <Modloader/app/structs/LinkedList_1_System_Object_.h>
#include <Modloader/app/structs/LinkedList_1_T_Enumerator_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Collections::Generic::LinkedList_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::LinkedList_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::LinkedListNode_1_System_Object_*, get_First, app::LinkedList_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6DB0, app::LinkedListNode_1_System_Object_*, get_Last, app::LinkedList_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, System_Collections_Generic_ICollection_T__get_IsReadOnly, app::LinkedList_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ICollection_get_IsSynchronized, app::LinkedList_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E7EE0, app::Object*, ICollection_get_SyncRoot, app::LinkedList_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_1, app::LinkedList_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6D90, void, ctor_2, app::LinkedList_1_System_Object_* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x018E6DC0, void, System_Collections_Generic_ICollection_T__Add, app::LinkedList_1_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x018E6DF0, app::LinkedListNode_1_System_Object_*, AddFirst_1, app::LinkedList_1_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x018E6F50, void, AddFirst_2, app::LinkedList_1_System_Object_* this_ptr, app::LinkedListNode_1_System_Object_* node)
    IL2CPP_REGISTER_METHOD(0x018E6FE0, app::LinkedListNode_1_System_Object_*, AddLast_1, app::LinkedList_1_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x018E7130, void, AddLast_2, app::LinkedList_1_System_Object_* this_ptr, app::LinkedListNode_1_System_Object_* node)
    IL2CPP_REGISTER_METHOD(0x018E71C0, void, Clear, app::LinkedList_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E7250, bool, Contains, app::LinkedList_1_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x018E7280, void, CopyTo, app::LinkedList_1_System_Object_* this_ptr, app::Object__Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x018E74C0, app::LinkedListNode_1_System_Object_*, Find, app::LinkedList_1_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x018E7580, app::LinkedList_1_T_Enumerator_System_Object_, GetEnumerator, app::LinkedList_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x018E75D0,
        app::IEnumerator_1_System_Object_*,
        System_Collections_Generic_IEnumerable_T__GetEnumerator,
        app::LinkedList_1_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x018E7660, bool, Remove_1, app::LinkedList_1_System_Object_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x018E76D0, void, Remove_2, app::LinkedList_1_System_Object_* this_ptr, app::LinkedListNode_1_System_Object_* node)
    IL2CPP_REGISTER_METHOD(0x018E7740, void, RemoveLast, app::LinkedList_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x018E7820,
        void,
        GetObjectData,
        app::LinkedList_1_System_Object_* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x018E79E0, void, OnDeserialization, app::LinkedList_1_System_Object_* this_ptr, app::Object* sender)
    IL2CPP_REGISTER_METHOD(
        0x018E7C00,
        void,
        InternalInsertNodeBefore,
        app::LinkedList_1_System_Object_* this_ptr,
        app::LinkedListNode_1_System_Object_* node,
        app::LinkedListNode_1_System_Object_* new_node
    )
    IL2CPP_REGISTER_METHOD(
        0x018E7C50,
        void,
        InternalInsertNodeToEmptyList,
        app::LinkedList_1_System_Object_* this_ptr,
        app::LinkedListNode_1_System_Object_* new_node
    )
    IL2CPP_REGISTER_METHOD(0x018E7C80, void, InternalRemoveNode, app::LinkedList_1_System_Object_* this_ptr, app::LinkedListNode_1_System_Object_* node)
    IL2CPP_REGISTER_METHOD(0x018E7D10, void, ValidateNewNode, app::LinkedList_1_System_Object_* this_ptr, app::LinkedListNode_1_System_Object_* node)
    IL2CPP_REGISTER_METHOD(0x018E7DF0, void, ValidateNode, app::LinkedList_1_System_Object_* this_ptr, app::LinkedListNode_1_System_Object_* node)
    IL2CPP_REGISTER_METHOD(0x018E8040, void, ICollection_CopyTo, app::LinkedList_1_System_Object_* this_ptr, app::Array* array, int32_t index)
    IL2CPP_REGISTER_METHOD(0x018E75D0, app::IEnumerator*, IEnumerable_GetEnumerator, app::LinkedList_1_System_Object_* this_ptr)
} // namespace app::classes::System::Collections::Generic::LinkedList_1_System_Object_
