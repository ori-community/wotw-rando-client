#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlValueGetter.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::Schema::XmlValueGetter {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XmlValueGetter * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01938310, app::Object*, Invoke, (app::XmlValueGetter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::XmlValueGetter * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, (app::XmlValueGetter * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Xml::Schema::XmlValueGetter
