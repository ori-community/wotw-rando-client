#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_2_Int32_Int64_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_Int32_Int64_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x0477DBF8, Action_2_Int32_Int64___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::Action_2_Int32_Int64_ * this_ptr, int32_t arg1, int64_t arg2))
    IL2CPP_REGISTER_METHODINFO(0x0471AF20, Action_2_Int32_Int64__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C10800, app::IAsyncResult *, BeginInvoke, (app::Action_2_Int32_Int64_ * this_ptr, int32_t arg1, int64_t arg2, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_2_Int32_Int64_ * this_ptr, app::IAsyncResult * result))
}
