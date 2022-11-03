#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Action_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHODINFO(0x047056B8, Action_1_ZenFulcrum_EmbeddedBrowser_RejectHandler___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D247B0, void, Invoke, (app::Action_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * this_ptr, app::RejectHandler obj))
    IL2CPP_REGISTER_METHOD(0x02C0DF80, app::IAsyncResult*, BeginInvoke, (app::Action_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * this_ptr, app::RejectHandler obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_ZenFulcrum_EmbeddedBrowser_RejectHandler_
