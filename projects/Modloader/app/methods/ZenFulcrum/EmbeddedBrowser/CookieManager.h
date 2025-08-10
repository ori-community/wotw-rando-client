#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/BrowserNative_NativeCookie.h>
#include <Modloader/app/structs/CookieManager.h>
#include <Modloader/app/structs/IPromise_1_System_Collections_Generic_List_1_.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::CookieManager {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::CookieManager* this_ptr, app::Browser* browser)
    IL2CPP_REGISTER_METHOD(0x01DD0FF0, app::IPromise_1_System_Collections_Generic_List_1_*, GetCookies, app::CookieManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01DD1540, void, CB_GetCookieFunc, app::BrowserNative_NativeCookie* cookie)
    IL2CPP_REGISTER_METHOD(0x01DD1A20, void, ClearAll, app::CookieManager* this_ptr)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::CookieManager
