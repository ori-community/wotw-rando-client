#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Predicate_1_Moon_UI_TextBoxLine_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_Moon_UI_TextBoxLine_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0288CB20, bool, Invoke, (app::Predicate_1_Moon_UI_TextBoxLine_ * this_ptr, app::TextBoxLine_1 obj))
    IL2CPP_REGISTER_METHOD(0x02A4E6D0, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_Moon_UI_TextBoxLine_ * this_ptr, app::TextBoxLine_1 obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_Moon_UI_TextBoxLine_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_Moon_UI_TextBoxLine_
