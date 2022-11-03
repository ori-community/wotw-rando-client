#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Comparison_1_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_UnityEngine_Vector3_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04722960, Comparison_1_UnityEngine_Vector3___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02B87FA0, int32_t, Invoke, (app::Comparison_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 x, app::Vector3 y))
    IL2CPP_REGISTER_METHOD(0x02C85D80, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_UnityEngine_Vector3_ * this_ptr, app::Vector3 x, app::Vector3 y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UnityEngine_Vector3_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_UnityEngine_Vector3_
