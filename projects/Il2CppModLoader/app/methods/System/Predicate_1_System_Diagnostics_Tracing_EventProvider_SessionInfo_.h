#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Predicate_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0288C090, bool, Invoke, (app::Predicate_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ * this_ptr, app::EventProvider_SessionInfo obj))
    IL2CPP_REGISTER_METHOD(0x02A519E0, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ * this_ptr, app::EventProvider_SessionInfo obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_
