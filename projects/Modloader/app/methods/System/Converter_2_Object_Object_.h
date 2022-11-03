#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Converter_2_Object_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Converter_2_Object_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, app::Object*, Invoke, (app::Converter_2_Object_Object_ * this_ptr, app::Object* input))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Converter_2_Object_Object_ * this_ptr, app::Object* input, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::Converter_2_Object_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Converter_2_Object_Object_
