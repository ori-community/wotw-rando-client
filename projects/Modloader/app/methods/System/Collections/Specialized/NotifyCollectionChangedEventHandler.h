#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NotifyCollectionChangedEventHandler.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/NotifyCollectionChangedEventArgs.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Specialized::NotifyCollectionChangedEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::NotifyCollectionChangedEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::NotifyCollectionChangedEventHandler * this_ptr, app::Object* sender, app::NotifyCollectionChangedEventArgs* e))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::NotifyCollectionChangedEventHandler * this_ptr, app::Object* sender, app::NotifyCollectionChangedEventArgs* e, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::NotifyCollectionChangedEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Collections::Specialized::NotifyCollectionChangedEventHandler
