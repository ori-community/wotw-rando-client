#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_1_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_UnityEngine_Rect_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x029FE890, void, Invoke, (app::Action_1_UnityEngine_Rect_ * this_ptr, app::Rect obj))
    IL2CPP_REGISTER_METHOD(0x02C0C420, app::IAsyncResult *, BeginInvoke, (app::Action_1_UnityEngine_Rect_ * this_ptr, app::Rect obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UnityEngine_Rect_ * this_ptr, app::IAsyncResult * result))
}
