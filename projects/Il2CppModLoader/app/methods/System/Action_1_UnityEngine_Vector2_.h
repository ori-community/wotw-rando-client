#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_1_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x01D25940, void, Invoke, (app::Action_1_UnityEngine_Vector2_ * this_ptr, app::Vector2 obj))
    IL2CPP_REGISTER_METHODINFO(0x04766270, Action_1_UnityEngine_Vector2__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_UnityEngine_Vector2_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x04762180, Action_1_UnityEngine_Vector2___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C0D090, app::IAsyncResult *, BeginInvoke, (app::Action_1_UnityEngine_Vector2_ * this_ptr, app::Vector2 obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UnityEngine_Vector2_ * this_ptr, app::IAsyncResult * result))
}
