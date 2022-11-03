#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::DialogHandler_MenuCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DialogHandler_MenuCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::DialogHandler_MenuCallback * this_ptr, int32_t command_id))
    IL2CPP_REGISTER_METHOD(0x01DD5A00, app::IAsyncResult*, BeginInvoke, (app::DialogHandler_MenuCallback * this_ptr, int32_t command_id, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DialogHandler_MenuCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::DialogHandler_MenuCallback
