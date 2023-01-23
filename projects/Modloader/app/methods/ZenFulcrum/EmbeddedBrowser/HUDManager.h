#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HUDManager.h>
#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/JSONNode.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::HUDManager {
    IL2CPP_REGISTER_METHOD(0x01DE0590, app::HUDManager*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x01DE0610, void, set_Instance, (app::HUDManager * value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Browser*, get_HUDBrowser, (app::HUDManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_HUDBrowser, (app::HUDManager * this_ptr, app::Browser* value))
    IL2CPP_REGISTER_METHOD(0x01DE0610, void, Awake, (app::HUDManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE06A0, void, Start, (app::HUDManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE0BC0, app::IEnumerator*, Rehide, (app::HUDManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE0D00, void, Unpause, (app::HUDManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE0F20, void, Pause, (app::HUDManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE1140, void, Update, (app::HUDManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE11C0, void, Say, (app::HUDManager * this_ptr, app::String* html, float dwell_time))
    IL2CPP_REGISTER_METHOD(0x01DE1360, void, EnableUserControls, (app::HUDManager * this_ptr, bool enable_it))
    IL2CPP_REGISTER_METHOD(0x01DE1480, void, LoadBrowseLevel, (app::HUDManager * this_ptr, bool force))
    IL2CPP_REGISTER_METHOD(0x01DE15F0, app::IEnumerator*, LoadLevel, (app::HUDManager * this_ptr, bool force))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HUDManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE1750, void, _Start_b__11_0, (app::HUDManager * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHODINFO(0x04704950, HUDManager__Start_b__11_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DE1760, void, _Start_b__11_1, (app::HUDManager * this_ptr, app::JSONNode* args))
    IL2CPP_REGISTER_METHODINFO(0x0474D618, HUDManager__Start_b__11_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DE18C0, void, _Start_b__11_3, (app::HUDManager * this_ptr, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x047803A8, HUDManager__Start_b__11_3__MethodInfo)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::HUDManager
