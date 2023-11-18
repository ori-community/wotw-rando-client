#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean_.h>
#include <Modloader/app/structs/ExternalKeyboard.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/JSONNode.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::ExternalKeyboard {
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::Browser*, get_ActiveBrowser, (app::ExternalKeyboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DDA4C0, void, set_ActiveBrowser, (app::ExternalKeyboard * this_ptr, app::Browser* value))
    IL2CPP_REGISTER_METHOD(0x01DDA4F0, void, _SetActiveBrowser, (app::ExternalKeyboard * this_ptr, app::Browser* browser))
    IL2CPP_REGISTER_METHOD(0x01DDA6D0, void, add_onFocusChange, (app::ExternalKeyboard * this_ptr, app::Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean_* value))
    IL2CPP_REGISTER_METHOD(0x01DDA7C0, void, remove_onFocusChange, (app::ExternalKeyboard * this_ptr, app::Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean_* value))
    IL2CPP_REGISTER_METHOD(0x01DDA8B0, void, Awake, (app::ExternalKeyboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DDAF00, app::IEnumerator*, FindAndListenForBrowsers, (app::ExternalKeyboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DDB050, void, ObserveBrowser, (app::ExternalKeyboard * this_ptr, app::Browser* browser))
    IL2CPP_REGISTER_METHOD(0x01DDB540, void, DoFocus, (app::ExternalKeyboard * this_ptr, app::Browser* browser))
    IL2CPP_REGISTER_METHOD(0x01DDB7B0, void, SetVisible, (app::ExternalKeyboard * this_ptr, bool visible))
    IL2CPP_REGISTER_METHOD(0x01DDB8F0, void, OnBrowserFocus, (app::ExternalKeyboard * this_ptr, bool mouse_focused, bool kb_focused))
    IL2CPP_REGISTER_METHOD(0x01DDBA50, void, CommandEntered, (app::ExternalKeyboard * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHOD(0x01DDC600, void, TextTyped, (app::ExternalKeyboard * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHOD(0x01DDC750, void, ctor, (app::ExternalKeyboard * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::ExternalKeyboard
