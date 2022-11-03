#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Comparison_1_UnityEngine_Rect_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_UnityEngine_Rect_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B892E0, int32_t, Invoke, (app::Comparison_1_UnityEngine_Rect_ * this_ptr, app::Rect x, app::Rect y))
    IL2CPP_REGISTER_METHOD(0x02C84C50, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_UnityEngine_Rect_ * this_ptr, app::Rect x, app::Rect y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UnityEngine_Rect_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_UnityEngine_Rect_
