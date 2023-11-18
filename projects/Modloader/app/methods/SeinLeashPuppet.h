#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinLeashPuppet.h>

namespace app::classes::SeinLeashPuppet {
    IL2CPP_REGISTER_METHOD(0x00E3E2D0, int32_t, get_Id, (app::SeinLeashPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, (app::SeinLeashPuppet * this_ptr))
} // namespace app::classes::SeinLeashPuppet
