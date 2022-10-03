#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::HeaderParser {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::HeaderParser * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x014347E0, app::String__Array*, Invoke, (app::HeaderParser * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::HeaderParser * this_ptr, app::String* value, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::String__Array*, EndInvoke, (app::HeaderParser * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::HeaderParser
