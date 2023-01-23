#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LeverPuppet.h>

namespace app::classes::LeverPuppet {
    IL2CPP_REGISTER_METHOD(0x008556D0, int32_t, get_Id, (app::LeverPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E59860, void, ctor, (app::LeverPuppet * this_ptr))
} // namespace app::classes::LeverPuppet
