#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BrowserNative_Calltype_zfb_characterEvent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_characterEvent {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::BrowserNative_Calltype_zfb_characterEvent * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C778D0, void, Invoke, (app::BrowserNative_Calltype_zfb_characterEvent * this_ptr, int32_t id, int32_t character, int32_t windows_key_code))
    IL2CPP_REGISTER_METHOD(0x01C77C50, app::IAsyncResult*, BeginInvoke, (app::BrowserNative_Calltype_zfb_characterEvent * this_ptr, int32_t id, int32_t character, int32_t windows_key_code, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::BrowserNative_Calltype_zfb_characterEvent * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative_Calltype_zfb_characterEvent
