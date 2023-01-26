#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Browser_JSCallback.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/JSONNode.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Browser_JSCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Browser_JSCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::Browser_JSCallback * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::Browser_JSCallback * this_ptr, app::JSONNode* args, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Browser_JSCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Browser_JSCallback
