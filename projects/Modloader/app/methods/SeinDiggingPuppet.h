#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinDiggingPuppet.h>

namespace app::classes::SeinDiggingPuppet {
    IL2CPP_REGISTER_METHOD(0x007E3F30, int32_t, get_Id, app::SeinDiggingPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, app::SeinDiggingPuppet* this_ptr)
} // namespace app::classes::SeinDiggingPuppet
