#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::DataRowChangeEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DataRowChangeEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::DataRowChangeEventHandler * this_ptr, app::Object* sender, app::DataRowChangeEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::DataRowChangeEventHandler * this_ptr, app::Object* sender, app::DataRowChangeEventArgs* e, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DataRowChangeEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Data::DataRowChangeEventHandler
