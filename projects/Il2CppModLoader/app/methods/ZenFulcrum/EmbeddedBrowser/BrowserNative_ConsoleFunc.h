#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_ConsoleFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_ConsoleFunc * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01DCC650, void, Invoke, (app::BrowserNative_ConsoleFunc * this_ptr, int32_t browser_id, app::String* message, app::String* source, int32_t line))
    IL2CPP_REGISTER_METHOD(0x01DCCA50, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_ConsoleFunc * this_ptr, int32_t browser_id, app::String* message, app::String* source, int32_t line, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_ConsoleFunc * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_ConsoleFunc
