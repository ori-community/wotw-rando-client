#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/LinkedList_1_System_Object_.h>
#include <Modloader/app/structs/LinkedList_1_T_Enumerator_System_Object___Boxed.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Collections::Generic::LinkedList_1_T__Enumerator_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00107C30, app::Object*, get_Current, (app::LinkedList_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001525E0, app::Object*, IEnumerator_get_Current, (app::LinkedList_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00152590, void, ctor_1, (app::LinkedList_1_T_Enumerator_System_Object___Boxed * this_ptr, app::LinkedList_1_System_Object_* list))
    IL2CPP_REGISTER_METHOD(0x001525C0, void, ctor_2, (app::LinkedList_1_T_Enumerator_System_Object___Boxed * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x00152710, bool, MoveNext, (app::LinkedList_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00152720, void, IEnumerator_Reset, (app::LinkedList_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::LinkedList_1_T_Enumerator_System_Object___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00152810, void, ISerializable_GetObjectData, (app::LinkedList_1_T_Enumerator_System_Object___Boxed * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x00152830, void, IDeserializationCallback_OnDeserialization, (app::LinkedList_1_T_Enumerator_System_Object___Boxed * this_ptr, app::Object* sender))
} // namespace app::classes::System::Collections::Generic::LinkedList_1_T__Enumerator_System_Object_
