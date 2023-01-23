#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Browser_JSResultFunc.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/JSONNode.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Browser_JSResultFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Browser_JSResultFunc * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C712A0, void, Invoke, (app::Browser_JSResultFunc * this_ptr, app::JSONNode* value, bool is_error))
    IL2CPP_REGISTER_METHOD(0x01C717F0, app::IAsyncResult*, BeginInvoke, (app::Browser_JSResultFunc * this_ptr, app::JSONNode* value, bool is_error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Browser_JSResultFunc * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Browser_JSResultFunc
