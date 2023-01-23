#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ExceptionEventArgs.h>

namespace app::classes::System::EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04776C10, EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (app::EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs_ * this_ptr, app::Object* sender, app::ExceptionEventArgs* e))
    IL2CPP_REGISTER_METHODINFO(0x0474C000, EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs__Invoke__MethodInfo)
} // namespace app::classes::System::EventHandler_1_ZenFulcrum_EmbeddedBrowser_ExceptionEventArgs_
