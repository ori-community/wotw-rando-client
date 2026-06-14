#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/ExternalKeyboard_c.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::ExternalKeyboard___c {
    IL2CPP_REGISTER_METHOD(0x01DDC930, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ExternalKeyboard_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__22_0, app::ExternalKeyboard_c* this_ptr, app::Browser* browser, bool editable)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::ExternalKeyboard___c
