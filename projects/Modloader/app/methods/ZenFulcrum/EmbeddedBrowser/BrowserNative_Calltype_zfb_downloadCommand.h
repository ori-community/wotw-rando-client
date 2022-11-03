#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_downloadCommand {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_downloadCommand * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C78C90, void, Invoke, (app::BrowserNative_Calltype_zfb_downloadCommand * this_ptr, int32_t id, int32_t download_id, app::BrowserNative_DownloadAction__Enum command, app::String* file_name))
    IL2CPP_REGISTER_METHOD(0x01C79070, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_downloadCommand * this_ptr, int32_t id, int32_t download_id, app::BrowserNative_DownloadAction__Enum command, app::String* file_name, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_downloadCommand * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_downloadCommand
