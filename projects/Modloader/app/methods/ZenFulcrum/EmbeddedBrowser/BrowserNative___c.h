#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrowserNative_c.h>
#include <Modloader/app/structs/EventArgs.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative___c {
    IL2CPP_REGISTER_METHOD(0x01C772D0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BrowserNative_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01C77410, void, _LoadNative_b__22_0, app::BrowserNative_c* this_ptr, app::Object* sender, app::EventArgs* args)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::BrowserNative___c
