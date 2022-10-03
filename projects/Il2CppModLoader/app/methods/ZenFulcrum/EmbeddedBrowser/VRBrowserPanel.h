#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::VRBrowserPanel {
    IL2CPP_REGISTER_METHOD(0x016702B0, void, Awake, (app::VRBrowserPanel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01670CC0, void, OnDestroy, (app::VRBrowserPanel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01670F00, void, OnKeyboardOnOnFocusChange, (app::VRBrowserPanel * this_ptr, app::Browser* browser, bool editable))
    IL2CPP_REGISTER_METHODINFO(0x04783170, VRBrowserPanel_OnKeyboardOnOnFocusChange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01671080, void, CloseBrowser, (app::VRBrowserPanel * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047597A8, VRBrowserPanel_CloseBrowser__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016712D0, app::Browser*, CreateBrowser, (app::VRBrowserPanel * this_ptr, app::Browser* parent))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::VRBrowserPanel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016716A0, void, _Awake_b__3_0, (app::VRBrowserPanel * this_ptr, app::JSONNode* data))
    IL2CPP_REGISTER_METHODINFO(0x0474B920, VRBrowserPanel__Awake_b__3_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016717D0, void, _Awake_b__3_1, (app::VRBrowserPanel * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHODINFO(0x04781010, VRBrowserPanel__Awake_b__3_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016718C0, void, _Awake_b__3_2, (app::VRBrowserPanel * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHODINFO(0x0478AA78, VRBrowserPanel__Awake_b__3_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x016719B0, void, _Awake_b__3_3, (app::VRBrowserPanel * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHODINFO(0x04782350, VRBrowserPanel__Awake_b__3_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01671AA0, void, _Awake_b__3_4, (app::VRBrowserPanel * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHODINFO(0x047129A0, VRBrowserPanel__Awake_b__3_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01671AB0, void, _Awake_b__3_5, (app::VRBrowserPanel * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHODINFO(0x04713450, VRBrowserPanel__Awake_b__3_5__MethodInfo)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::VRBrowserPanel
