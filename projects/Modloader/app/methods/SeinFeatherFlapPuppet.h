#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinFeatherFlapPuppet.h>

namespace app::classes::SeinFeatherFlapPuppet {
    IL2CPP_REGISTER_METHOD(0x00ADC4A0, int32_t, get_Id, (app::SeinFeatherFlapPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, (app::SeinFeatherFlapPuppet * this_ptr))
} // namespace app::classes::SeinFeatherFlapPuppet
