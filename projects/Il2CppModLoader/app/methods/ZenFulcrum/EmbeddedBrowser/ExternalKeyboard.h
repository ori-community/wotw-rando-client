#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::ExternalKeyboard {
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::Browser *, get_ActiveBrowser, (app::ExternalKeyboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DDA4C0, void, set_ActiveBrowser, (app::ExternalKeyboard * this_ptr, app::Browser * value))
    IL2CPP_REGISTER_METHOD(0x01DDA4F0, void, _SetActiveBrowser, (app::ExternalKeyboard * this_ptr, app::Browser * browser))
    IL2CPP_REGISTER_METHOD(0x01DDA6D0, void, add_onFocusChange, (app::ExternalKeyboard * this_ptr, app::Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean_ * value))
    IL2CPP_REGISTER_METHOD(0x01DDA7C0, void, remove_onFocusChange, (app::ExternalKeyboard * this_ptr, app::Action_2_ZenFulcrum_EmbeddedBrowser_Browser_Boolean_ * value))
    IL2CPP_REGISTER_METHOD(0x01DDA8B0, void, Awake, (app::ExternalKeyboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DDAF00, app::IEnumerator *, FindAndListenForBrowsers, (app::ExternalKeyboard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DDB050, void, ObserveBrowser, (app::ExternalKeyboard * this_ptr, app::Browser * browser))
    IL2CPP_REGISTER_METHODINFO(0x0475A820, ExternalKeyboard_ObserveBrowser__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DDB540, void, DoFocus, (app::ExternalKeyboard * this_ptr, app::Browser * browser))
    IL2CPP_REGISTER_METHOD(0x01DDB7B0, void, SetVisible, (app::ExternalKeyboard * this_ptr, bool visible))
    IL2CPP_REGISTER_METHOD(0x01DDB8F0, void, OnBrowserFocus, (app::ExternalKeyboard * this_ptr, bool mouse_focused, bool kb_focused))
    IL2CPP_REGISTER_METHODINFO(0x04747E80, ExternalKeyboard_OnBrowserFocus__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DDBA50, void, CommandEntered, (app::ExternalKeyboard * this_ptr, app::JSONNode * args))
    IL2CPP_REGISTER_METHODINFO(0x0472F698, ExternalKeyboard_CommandEntered__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DDC600, void, TextTyped, (app::ExternalKeyboard * this_ptr, app::JSONNode * args))
    IL2CPP_REGISTER_METHODINFO(0x04781960, ExternalKeyboard_TextTyped__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DDC750, void, ctor, (app::ExternalKeyboard * this_ptr))
}
