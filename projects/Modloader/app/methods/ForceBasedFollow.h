#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ForceBasedFollow {
    IL2CPP_REGISTER_METHOD(0x0127FBB0, void, FixedUpdate, (app::ForceBasedFollow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01280440, void, ctor, (app::ForceBasedFollow * this_ptr))
} // namespace app::classes::ForceBasedFollow
