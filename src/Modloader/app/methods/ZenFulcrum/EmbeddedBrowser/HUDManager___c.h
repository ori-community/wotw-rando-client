#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HUDManager_c.h>
#include <Modloader/app/structs/JSONNode.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::HUDManager___c {
    IL2CPP_REGISTER_METHOD(0x01DE1A00, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::HUDManager_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BFDB90, void, _Start_b__11_2, app::HUDManager_c* this_ptr, app::JSONNode* args)
    IL2CPP_REGISTER_METHOD(0x01DE1B40, bool, _LoadLevel_b__19_0, app::HUDManager_c* this_ptr)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::HUDManager___c
