#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CacheBaseAnimatorAction {
    IL2CPP_REGISTER_METHOD(0x008230C0, void, Perform, (app::CacheBaseAnimatorAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::CacheBaseAnimatorAction * this_ptr))
} // namespace app::classes::CacheBaseAnimatorAction
