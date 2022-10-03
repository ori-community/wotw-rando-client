#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::EventHandler_1_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::EventHandler_1_Object_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (app::EventHandler_1_Object_ * this_ptr, app::Object* sender, app::Object* e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::EventHandler_1_Object_ * this_ptr, app::Object* sender, app::Object* e, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::EventHandler_1_Object_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::EventHandler_1_Object_
