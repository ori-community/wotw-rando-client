#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SteamAPIWarningMessageHook_t.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::Steamworks::SteamAPIWarningMessageHook_t {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::SteamAPIWarningMessageHook_t * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::SteamAPIWarningMessageHook_t * this_ptr, int32_t n_severity, app::StringBuilder* pch_debug_text))
    IL2CPP_REGISTER_METHOD(0x027E20D0, app::IAsyncResult*, BeginInvoke, (app::SteamAPIWarningMessageHook_t * this_ptr, int32_t n_severity, app::StringBuilder* pch_debug_text, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::SteamAPIWarningMessageHook_t * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Steamworks::SteamAPIWarningMessageHook_t
