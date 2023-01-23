#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Func_2_Object_UnityEngine_Rect_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Func_2_Object_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_2_Object_UnityEngine_Rect_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02FA0640, app::Rect, Invoke, (app::Func_2_Object_UnityEngine_Rect_ * this_ptr, app::Object* arg))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Func_2_Object_UnityEngine_Rect_ * this_ptr, app::Object* arg, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x01C7A680, app::Rect, EndInvoke, (app::Func_2_Object_UnityEngine_Rect_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_2_Object_UnityEngine_Rect_
