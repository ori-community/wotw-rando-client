#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Action_1_ValueTuple_4_Object_Int32_Int32_Single__ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_ValueTuple_4_Object_Int32_Int32_Single_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D24D50, void, Invoke, (app::Action_1_ValueTuple_4_Object_Int32_Int32_Single_ * this_ptr, app::ValueTuple_4_Object_Int32_Int32_Single_ obj))
    IL2CPP_REGISTER_METHOD(0x02C08480, app::IAsyncResult*, BeginInvoke, (app::Action_1_ValueTuple_4_Object_Int32_Int32_Single_ * this_ptr, app::ValueTuple_4_Object_Int32_Int32_Single_ obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_ValueTuple_4_Object_Int32_Int32_Single_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_ValueTuple_4_Object_Int32_Int32_Single__
