#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Func_1_UnityEngine_Matrix4x4_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_1_UnityEngine_Matrix4x4_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02881920, app::Matrix4x4, Invoke, (app::Func_1_UnityEngine_Matrix4x4_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::Func_1_UnityEngine_Matrix4x4_ * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x02881D00, app::Matrix4x4, EndInvoke, (app::Func_1_UnityEngine_Matrix4x4_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_1_UnityEngine_Matrix4x4_
