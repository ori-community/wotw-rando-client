#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_4_Object_Moon_ActiveAnimationHandle_Int32_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_4_Object_Moon_ActiveAnimationHandle_Int32_Object_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C17600, void, Invoke, (app::Action_4_Object_Moon_ActiveAnimationHandle_Int32_Object_ * this_ptr, app::Object * arg1, app::ActiveAnimationHandle arg2, int32_t arg3, app::Object * arg4))
    IL2CPP_REGISTER_METHOD(0x02C17DA0, app::IAsyncResult *, BeginInvoke, (app::Action_4_Object_Moon_ActiveAnimationHandle_Int32_Object_ * this_ptr, app::Object * arg1, app::ActiveAnimationHandle arg2, int32_t arg3, app::Object * arg4, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_4_Object_Moon_ActiveAnimationHandle_Int32_Object_ * this_ptr, app::IAsyncResult * result))
}
