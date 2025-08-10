#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExternalKeyboard_c_DisplayClass16_0.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::ExternalKeyboard___c__DisplayClass16_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ExternalKeyboard_c_DisplayClass16_0* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01DDCA70,
        void,
        _ObserveBrowser_b__0,
        app::ExternalKeyboard_c_DisplayClass16_0* this_ptr,
        app::String* tag_name,
        bool editable,
        app::String* value
    )
    IL2CPP_REGISTER_METHOD(0x01DDCB60, void, _ObserveBrowser_b__1, app::ExternalKeyboard_c_DisplayClass16_0* this_ptr)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::ExternalKeyboard___c__DisplayClass16_0
