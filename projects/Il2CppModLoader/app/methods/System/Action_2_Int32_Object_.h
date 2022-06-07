#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_2_Int32_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_2_Int32_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C108D0, void, Invoke, (app::Action_2_Int32_Object_ * this_ptr, int32_t arg1, app::Object * arg2))
    IL2CPP_REGISTER_METHOD(0x02C10C20, app::IAsyncResult *, BeginInvoke, (app::Action_2_Int32_Object_ * this_ptr, int32_t arg1, app::Object * arg2, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_2_Int32_Object_ * this_ptr, app::IAsyncResult * result))
}
