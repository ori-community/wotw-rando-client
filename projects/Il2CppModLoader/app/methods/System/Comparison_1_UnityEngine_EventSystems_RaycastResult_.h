#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Comparison_1_UnityEngine_EventSystems_RaycastResult_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x0476A360, Comparison_1_UnityEngine_EventSystems_RaycastResult___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C81680, int32_t, Invoke, (app::Comparison_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::RaycastResult x, app::RaycastResult y))
    IL2CPP_REGISTER_METHOD(0x02C82070, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::RaycastResult x, app::RaycastResult y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UnityEngine_EventSystems_RaycastResult_ * this_ptr, app::IAsyncResult * result))
}
