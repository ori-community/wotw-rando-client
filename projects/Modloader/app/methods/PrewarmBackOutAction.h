#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PrewarmBackOutAction {
    IL2CPP_REGISTER_METHOD(0x00C737F0, void, Perform, (app::PrewarmBackOutAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PrewarmBackOutAction * this_ptr))
} // namespace app::classes::PrewarmBackOutAction
