#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::SteamAPIWarningMessageHook_t {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::SteamAPIWarningMessageHook_t * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::SteamAPIWarningMessageHook_t * this_ptr, int32_t n_severity, app::StringBuilder * pch_debug_text))
    IL2CPP_REGISTER_METHOD(0x027E20D0, app::IAsyncResult *, BeginInvoke, (app::SteamAPIWarningMessageHook_t * this_ptr, int32_t n_severity, app::StringBuilder * pch_debug_text, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::SteamAPIWarningMessageHook_t * this_ptr, app::IAsyncResult * result))
}
