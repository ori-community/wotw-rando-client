#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_1_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Int32Enum_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::Action_1_Int32Enum_ * this_ptr, app::Int32Enum__Enum obj))
    IL2CPP_REGISTER_METHOD(0x02A05B80, app::IAsyncResult *, BeginInvoke, (app::Action_1_Int32Enum_ * this_ptr, app::Int32Enum__Enum obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Int32Enum_ * this_ptr, app::IAsyncResult * result))
}
