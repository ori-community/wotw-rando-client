#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ShowOptionsAction {
    IL2CPP_REGISTER_METHOD(0x005C5060, void, Perform, (app::ShowOptionsAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ShowOptionsAction * this_ptr))
} // namespace app::classes::ShowOptionsAction
