#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabSignInProvider_c_DisplayClass54_0.h>
#include <Modloader/app/structs/LinkSteamAccountResult.h>
#include <Modloader/app/structs/LinkXboxAccountResult.h>
#include <Modloader/app/structs/PlayFabError.h>

namespace app::classes::SystemIntegration::PlayFabSignInProvider___c__DisplayClass54_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayFabSignInProvider_c_DisplayClass54_0 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005214C0, void, _PlayFabPlatformLinkUpdate_b__0, (app::PlayFabSignInProvider_c_DisplayClass54_0 * this_ptr, app::LinkXboxAccountResult* res))
    IL2CPP_REGISTER_METHOD(0x00521520, void, _PlayFabPlatformLinkUpdate_b__1, (app::PlayFabSignInProvider_c_DisplayClass54_0 * this_ptr, app::PlayFabError* e))
    IL2CPP_REGISTER_METHOD(0x005214C0, void, _PlayFabPlatformLinkUpdate_b__2, (app::PlayFabSignInProvider_c_DisplayClass54_0 * this_ptr, app::LinkSteamAccountResult* res))
    IL2CPP_REGISTER_METHOD(0x00521520, void, _PlayFabPlatformLinkUpdate_b__3, (app::PlayFabSignInProvider_c_DisplayClass54_0 * this_ptr, app::PlayFabError* e))
} // namespace app::classes::SystemIntegration::PlayFabSignInProvider___c__DisplayClass54_0
