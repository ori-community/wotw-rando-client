#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Reflection::TypeFilter {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::TypeFilter * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D3D560, bool, Invoke, (app::TypeFilter * this_ptr, app::Type* m, app::Object* filter_criteria))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::TypeFilter * this_ptr, app::Type* m, app::Object* filter_criteria, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::TypeFilter * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Reflection::TypeFilter
