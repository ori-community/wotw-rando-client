#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CachingEventHandler.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XsdCachingReader.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Xml::CachingEventHandler {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::CachingEventHandler * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::CachingEventHandler * this_ptr, app::XsdCachingReader* caching_reader))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::CachingEventHandler * this_ptr, app::XsdCachingReader* caching_reader, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::CachingEventHandler * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Xml::CachingEventHandler
