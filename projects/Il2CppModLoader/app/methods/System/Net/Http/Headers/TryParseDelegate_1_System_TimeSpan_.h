#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::Http::Headers::TryParseDelegate_1_System_TimeSpan_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::TryParseDelegate_1_System_TimeSpan_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x04797440, TryParseDelegate_1_System_TimeSpan___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D3D560, bool, Invoke, (app::TryParseDelegate_1_System_TimeSpan_ * this_ptr, app::String * value, app::TimeSpan * result))
    IL2CPP_REGISTER_METHOD(0x0254DCF0, app::IAsyncResult *, BeginInvoke, (app::TryParseDelegate_1_System_TimeSpan_ * this_ptr, app::String * value, app::TimeSpan * result, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x0167A2D0, bool, EndInvoke, (app::TryParseDelegate_1_System_TimeSpan_ * this_ptr, app::TimeSpan * result, app::IAsyncResult * __result))
}
