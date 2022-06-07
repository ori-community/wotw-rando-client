#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::DemoGUIMessage {
    IL2CPP_REGISTER_METHOD(0x02208300, void, OnGUI, (app::DemoGUIMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022083F0, void, ctor, (app::DemoGUIMessage * this_ptr))
}
