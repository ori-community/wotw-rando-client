#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VRBrowserPanel.h>
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/JSONNode.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::VRBrowserPanel {
    IL2CPP_REGISTER_METHOD(0x016702B0, void, Awake, (app::VRBrowserPanel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01670CC0, void, OnDestroy, (app::VRBrowserPanel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01670F00, void, OnKeyboardOnOnFocusChange, (app::VRBrowserPanel * this_ptr, app::Browser* browser, bool editable))
    IL2CPP_REGISTER_METHOD(0x01671080, void, CloseBrowser, (app::VRBrowserPanel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016712D0, app::Browser*, CreateBrowser, (app::VRBrowserPanel * this_ptr, app::Browser* parent))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::VRBrowserPanel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016716A0, void, _Awake_b__3_0, (app::VRBrowserPanel * this_ptr, app::JSONNode* data))
    IL2CPP_REGISTER_METHOD(0x016717D0, void, _Awake_b__3_1, (app::VRBrowserPanel * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHOD(0x016718C0, void, _Awake_b__3_2, (app::VRBrowserPanel * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHOD(0x016719B0, void, _Awake_b__3_3, (app::VRBrowserPanel * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHOD(0x01671AA0, void, _Awake_b__3_4, (app::VRBrowserPanel * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHOD(0x01671AB0, void, _Awake_b__3_5, (app::VRBrowserPanel * this_ptr, app::JSONNode* args))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::VRBrowserPanel
