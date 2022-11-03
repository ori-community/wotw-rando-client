#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Hacks::Robin {
    IL2CPP_REGISTER_METHOD(0x01499E10, void, FixedUpdate, (app::Robin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0149A1F0, void, OnDisable, (app::Robin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Robin * this_ptr))
} // namespace app::classes::Moon::Hacks::Robin
