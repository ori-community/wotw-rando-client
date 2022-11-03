#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Predicate_1_ValueTuple_2_Int32_Object__ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_ValueTuple_2_Int32_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02885850, bool, Invoke, (app::Predicate_1_ValueTuple_2_Int32_Object_ * this_ptr, app::ValueTuple_2_Int32_Object_ obj))
    IL2CPP_REGISTER_METHOD(0x02A52C30, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_ValueTuple_2_Int32_Object_ * this_ptr, app::ValueTuple_2_Int32_Object_ obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_ValueTuple_2_Int32_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_ValueTuple_2_Int32_Object__
