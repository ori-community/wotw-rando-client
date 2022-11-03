#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_ShowContextMenuFunc {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_ShowContextMenuFunc * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01DCDE10, void, Invoke, (app::BrowserNative_ShowContextMenuFunc * this_ptr, int32_t browser_id, app::String* menu_j_s_o_n, int32_t x, int32_t y, app::BrowserNative_ContextMenuOrigin__Enum origin))
    IL2CPP_REGISTER_METHOD(0x01DCE280, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_ShowContextMenuFunc * this_ptr, int32_t browser_id, app::String* menu_j_s_o_n, int32_t x, int32_t y, app::BrowserNative_ContextMenuOrigin__Enum origin, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_ShowContextMenuFunc * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_ShowContextMenuFunc
