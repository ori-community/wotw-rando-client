#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::BrowserInput {
    IL2CPP_REGISTER_METHOD(0x01C72D70, void, ctor, (app::BrowserInput * this_ptr, app::Browser * browser))
    IL2CPP_REGISTER_METHOD(0x01C72F80, void, HandleInput, (app::BrowserInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C73450, void, HandleMouseInput, (app::BrowserInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C73920, void, FeedScrolling, (app::BrowserInput * this_ptr, app::Vector2 mouse_scroll, float scroll_speed))
    IL2CPP_REGISTER_METHOD(0x01C73C80, void, HandleKeyInput_1, (app::BrowserInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C73E10, void, HandleKeyInput_2, (app::BrowserInput * this_ptr, app::List_1_UnityEngine_Event_ * key_events))
    IL2CPP_REGISTER_METHOD(0x01C741F0, void, HandleFocusLoss, (app::BrowserInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C74600, void, FireCommands, (app::BrowserInput * this_ptr, app::Event * ev))
    IL2CPP_REGISTER_METHOD(0x01C74720, void, cctor, ())
}
