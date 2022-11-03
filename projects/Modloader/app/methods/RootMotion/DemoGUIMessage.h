#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RootMotion::DemoGUIMessage {
    IL2CPP_REGISTER_METHOD(0x02208300, void, OnGUI, (app::DemoGUIMessage * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022083F0, void, ctor, (app::DemoGUIMessage * this_ptr))
} // namespace app::classes::RootMotion::DemoGUIMessage
