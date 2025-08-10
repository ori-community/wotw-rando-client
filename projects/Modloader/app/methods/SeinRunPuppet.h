#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinRunPuppet.h>

namespace app::classes::SeinRunPuppet {
    IL2CPP_REGISTER_METHOD(0x005D89A0, int32_t, get_Id, app::SeinRunPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, app::SeinRunPuppet* this_ptr)
} // namespace app::classes::SeinRunPuppet
