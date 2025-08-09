#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinRidePuppet.h>

namespace app::classes::SeinRidePuppet {
    IL2CPP_REGISTER_METHOD(0x005D6E50, int32_t, get_Id, app::SeinRidePuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, app::SeinRidePuppet* this_ptr)
} // namespace app::classes::SeinRidePuppet
