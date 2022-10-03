#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::OpenWriteCompletedEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::OpenWriteCompletedEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::OpenWriteCompletedEventHandler * this_ptr, app::Object* sender, app::OpenWriteCompletedEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::OpenWriteCompletedEventHandler * this_ptr, app::Object* sender, app::OpenWriteCompletedEventArgs* e, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::OpenWriteCompletedEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::OpenWriteCompletedEventHandler
