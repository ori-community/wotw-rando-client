#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FallOverride {
    IL2CPP_REGISTER_METHOD(0x00996820, void, Override, (app::FallOverride * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00996990, void, Revert, (app::FallOverride * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FallOverride * this_ptr))
} // namespace app::classes::FallOverride
