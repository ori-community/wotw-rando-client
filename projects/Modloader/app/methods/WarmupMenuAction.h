#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WarmupMenuAction {
    IL2CPP_REGISTER_METHOD(0x008D3640, void, Perform, (app::WarmupMenuAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::WarmupMenuAction * this_ptr))
} // namespace app::classes::WarmupMenuAction
