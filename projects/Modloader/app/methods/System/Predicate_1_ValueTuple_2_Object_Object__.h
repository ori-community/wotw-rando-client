#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Predicate_1_ValueTuple_2_Object_Object_.h>
#include <Modloader/app/structs/ValueTuple_2_Object_Object_.h>

namespace app::classes::System::Predicate_1_ValueTuple_2_Object_Object__ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Predicate_1_ValueTuple_2_Object_Object_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, app::Predicate_1_ValueTuple_2_Object_Object_* this_ptr, app::ValueTuple_2_Object_Object_ obj)
    IL2CPP_REGISTER_METHOD(
        0x02A52D00,
        app::IAsyncResult*,
        BeginInvoke,
        app::Predicate_1_ValueTuple_2_Object_Object_* this_ptr,
        app::ValueTuple_2_Object_Object_ obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, app::Predicate_1_ValueTuple_2_Object_Object_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Predicate_1_ValueTuple_2_Object_Object__
