#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FloatProviderAnimatorDriver {
    IL2CPP_REGISTER_METHOD(0x01270E80, void, Start, (app::FloatProviderAnimatorDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01270F10, void, FixedUpdate, (app::FloatProviderAnimatorDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01270FB0, void, ctor, (app::FloatProviderAnimatorDriver * this_ptr))
} // namespace app::classes::FloatProviderAnimatorDriver
