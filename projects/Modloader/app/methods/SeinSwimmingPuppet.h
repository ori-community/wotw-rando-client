#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinSwimmingPuppet {
    IL2CPP_REGISTER_METHOD(0x004FA040, int32_t, get_Id, (app::SeinSwimmingPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, (app::SeinSwimmingPuppet * this_ptr))
} // namespace app::classes::SeinSwimmingPuppet
