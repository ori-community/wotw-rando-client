#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01D253C0, void, Invoke, (app::Action_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ * this_ptr, app::EventProvider_SessionInfo obj))
    IL2CPP_REGISTER_METHOD(0x02A05460, app::IAsyncResult *, BeginInvoke, (app::Action_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ * this_ptr, app::EventProvider_SessionInfo obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ * this_ptr, app::IAsyncResult * result))
}
