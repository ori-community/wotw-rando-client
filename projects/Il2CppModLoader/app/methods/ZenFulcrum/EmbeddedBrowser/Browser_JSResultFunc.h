#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::Browser_JSResultFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Browser_JSResultFunc * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01C712A0, void, Invoke, (app::Browser_JSResultFunc * this_ptr, app::JSONNode * value, bool is_error))
    IL2CPP_REGISTER_METHOD(0x01C717F0, app::IAsyncResult *, BeginInvoke, (app::Browser_JSResultFunc * this_ptr, app::JSONNode * value, bool is_error, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Browser_JSResultFunc * this_ptr, app::IAsyncResult * result))
}
