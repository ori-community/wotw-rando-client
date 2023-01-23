#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinClamberPuppet.h>

namespace app::classes::SeinClamberPuppet {
    IL2CPP_REGISTER_METHOD(0x00A5B690, int32_t, get_Id, (app::SeinClamberPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, (app::SeinClamberPuppet * this_ptr))
} // namespace app::classes::SeinClamberPuppet
