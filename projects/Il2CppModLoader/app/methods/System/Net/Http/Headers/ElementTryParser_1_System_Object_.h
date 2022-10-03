#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Http::Headers::ElementTryParser_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ElementTryParser_1_System_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0254B810, bool, Invoke, (app::ElementTryParser_1_System_Object_ * this_ptr, app::Lexer* lexer, app::Object** parsed_value, app::Token* token))
    IL2CPP_REGISTER_METHOD(0x0254BD90, app::IAsyncResult*, BeginInvoke, (app::ElementTryParser_1_System_Object_ * this_ptr, app::Lexer* lexer, app::Object** parsed_value, app::Token* token, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (app::ElementTryParser_1_System_Object_ * this_ptr, app::Object** parsed_value, app::Token* token, app::IAsyncResult* result))
} // namespace app::classes::System::Net::Http::Headers::ElementTryParser_1_System_Object_
