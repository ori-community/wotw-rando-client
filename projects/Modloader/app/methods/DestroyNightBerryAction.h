#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DestroyNightBerryAction {
    IL2CPP_REGISTER_METHOD(0x00B8C010, void, Perform, (app::DestroyNightBerryAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::DestroyNightBerryAction * this_ptr))
} // namespace app::classes::DestroyNightBerryAction
