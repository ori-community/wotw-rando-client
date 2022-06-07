#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x0471FB90, Action_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01D247B0, void, Invoke, (app::Action_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_ * this_ptr, app::Promise_ResolveHandler obj))
    IL2CPP_REGISTER_METHOD(0x02C0DEB0, app::IAsyncResult *, BeginInvoke, (app::Action_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_ * this_ptr, app::Promise_ResolveHandler obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_ZenFulcrum_EmbeddedBrowser_Promise_ResolveHandler_ * this_ptr, app::IAsyncResult * result))
}
