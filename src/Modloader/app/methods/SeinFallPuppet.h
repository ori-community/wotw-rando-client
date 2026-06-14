#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinFallPuppet.h>

namespace app::classes::SeinFallPuppet {
    IL2CPP_REGISTER_METHOD(0x00AD8BA0, int32_t, get_Id, app::SeinFallPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, app::SeinFallPuppet* this_ptr)
} // namespace app::classes::SeinFallPuppet
