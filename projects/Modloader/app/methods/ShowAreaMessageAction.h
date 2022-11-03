#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ShowAreaMessageAction {
    IL2CPP_REGISTER_METHOD(0x005C40D0, void, Perform, (app::ShowAreaMessageAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ShowAreaMessageAction * this_ptr))
} // namespace app::classes::ShowAreaMessageAction
