#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C82340, int32_t, Invoke, (app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_ * this_ptr, app::VisibleLight x, app::VisibleLight y))
    IL2CPP_REGISTER_METHOD(0x02C83010, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_ * this_ptr, app::VisibleLight x, app::VisibleLight y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_UnityEngine_Experimental_Rendering_VisibleLight_
