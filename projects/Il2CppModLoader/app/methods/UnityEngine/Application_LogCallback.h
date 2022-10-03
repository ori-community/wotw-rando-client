#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Application_LogCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Application_LogCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0241CE70, void, Invoke, (app::Application_LogCallback * this_ptr, app::String* condition, app::String* stack_trace, app::LogType__Enum type))
    IL2CPP_REGISTER_METHOD(0x0241D3E0, app::IAsyncResult*, BeginInvoke, (app::Application_LogCallback * this_ptr, app::String* condition, app::String* stack_trace, app::LogType__Enum type, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Application_LogCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::Application_LogCallback
