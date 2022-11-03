#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Reflection::MonoProperty_GetterAdapter {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::MonoProperty_GetterAdapter * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01852930, app::Object*, Invoke, (app::MonoProperty_GetterAdapter * this_ptr, app::Object* _this))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::MonoProperty_GetterAdapter * this_ptr, app::Object* _this, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::MonoProperty_GetterAdapter * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Reflection::MonoProperty_GetterAdapter
