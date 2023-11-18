#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinDrillPuppet.h>

namespace app::classes::SeinDrillPuppet {
    IL2CPP_REGISTER_METHOD(0x00ACB190, int32_t, get_Id, (app::SeinDrillPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, (app::SeinDrillPuppet * this_ptr))
} // namespace app::classes::SeinDrillPuppet
