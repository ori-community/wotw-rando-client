#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinLeverPuppet.h>

namespace app::classes::SeinLeverPuppet {
    IL2CPP_REGISTER_METHOD(0x0088EB80, int32_t, get_Id, (app::SeinLeverPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, (app::SeinLeverPuppet * this_ptr))
} // namespace app::classes::SeinLeverPuppet
