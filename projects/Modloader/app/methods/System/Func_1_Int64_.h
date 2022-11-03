#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Func_1_Int64_ {
    IL2CPP_REGISTER_METHOD(0x01938310, int64_t, Invoke, (app::Func_1_Int64_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477D678, Func_1_Int64__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_1_Int64_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::Func_1_Int64_ * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52480, int64_t, EndInvoke, (app::Func_1_Int64_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_1_Int64_
