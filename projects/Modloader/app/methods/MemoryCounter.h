#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MemoryCounter {
    IL2CPP_REGISTER_METHOD(0x009D7710, void, FixedUpdate, (app::MemoryCounter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MemoryCounter * this_ptr))
} // namespace app::classes::MemoryCounter
