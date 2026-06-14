#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_System_Data_RBTree_1_Node__1__Boxed.h>
#include <Modloader/app/structs/Array_InternalEnumerator_1_System_Data_RBTree_1_Node___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RBTree_1_K_Node_System_Int32_.h>
#include <Modloader/app/structs/RBTree_1_K_Node_System_Object_.h>

namespace app::classes::System::Array_InternalEnumerator_1_System_Data_RBTree_1_Node_ {
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor_1, app::Array_InternalEnumerator_1_System_Data_RBTree_1_Node___Boxed* this_ptr, app::Array* array)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose_1, app::Array_InternalEnumerator_1_System_Data_RBTree_1_Node___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext_1, app::Array_InternalEnumerator_1_System_Data_RBTree_1_Node___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00199F10,
        app::RBTree_1_K_Node_System_Int32_,
        get_Current_1,
        app::Array_InternalEnumerator_1_System_Data_RBTree_1_Node___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset_1, app::Array_InternalEnumerator_1_System_Data_RBTree_1_Node___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00199F40, app::Object*, IEnumerator_get_Current_1, app::Array_InternalEnumerator_1_System_Data_RBTree_1_Node___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160580, void, ctor_2, app::Array_InternalEnumerator_1_System_Data_RBTree_1_Node__1__Boxed* this_ptr, app::Array* array)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose_2, app::Array_InternalEnumerator_1_System_Data_RBTree_1_Node__1__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00160590, bool, MoveNext_2, app::Array_InternalEnumerator_1_System_Data_RBTree_1_Node__1__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00199FF0,
        app::RBTree_1_K_Node_System_Object_,
        get_Current_2,
        app::Array_InternalEnumerator_1_System_Data_RBTree_1_Node__1__Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00160610, void, IEnumerator_Reset_2, app::Array_InternalEnumerator_1_System_Data_RBTree_1_Node__1__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0019A030, app::Object*, IEnumerator_get_Current_2, app::Array_InternalEnumerator_1_System_Data_RBTree_1_Node__1__Boxed* this_ptr)
} // namespace app::classes::System::Array_InternalEnumerator_1_System_Data_RBTree_1_Node_
