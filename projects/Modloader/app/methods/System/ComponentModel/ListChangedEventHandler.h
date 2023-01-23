#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ListChangedEventHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ListChangedEventArgs.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::ComponentModel::ListChangedEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::ListChangedEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::ListChangedEventHandler * this_ptr, app::Object* sender, app::ListChangedEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::ListChangedEventHandler * this_ptr, app::Object* sender, app::ListChangedEventArgs* e, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::ListChangedEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::ComponentModel::ListChangedEventHandler
