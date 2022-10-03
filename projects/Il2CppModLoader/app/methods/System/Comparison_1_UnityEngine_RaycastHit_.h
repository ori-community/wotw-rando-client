#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Comparison_1_UnityEngine_RaycastHit_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_UnityEngine_RaycastHit_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0471F308, Comparison_1_UnityEngine_RaycastHit___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C842A0, int32_t, Invoke, (app::Comparison_1_UnityEngine_RaycastHit_ * this_ptr, app::RaycastHit x, app::RaycastHit y))
    IL2CPP_REGISTER_METHOD(0x02C84B60, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_UnityEngine_RaycastHit_ * this_ptr, app::RaycastHit x, app::RaycastHit y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UnityEngine_RaycastHit_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_UnityEngine_RaycastHit_
