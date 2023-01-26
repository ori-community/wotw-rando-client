#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActionTimer_TimedAction.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::ActionTimer_TimedAction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ActionTimer_TimedAction * this_ptr))
}
