#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Microsoft::Xbox::Services::Xal::XalService_XalLogCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XalService_XalLogCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0143D200, void, Invoke, (app::XalService_XalLogCallback * this_ptr, app::String* area_name, app::XalTraceLevel__Enum level, uint64_t thread_id, uint64_t timestamp, app::String* message))
    IL2CPP_REGISTER_METHOD(0x0143D910, app::IAsyncResult*, BeginInvoke, (app::XalService_XalLogCallback * this_ptr, app::String* area_name, app::XalTraceLevel__Enum level, uint64_t thread_id, uint64_t timestamp, app::String* message, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XalService_XalLogCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Microsoft::Xbox::Services::Xal::XalService_XalLogCallback
