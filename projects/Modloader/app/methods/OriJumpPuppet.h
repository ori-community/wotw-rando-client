#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OriJumpPuppet.h>

namespace app::classes::OriJumpPuppet {
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_Id, app::OriJumpPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9F0, void, ctor, app::OriJumpPuppet* this_ptr)
} // namespace app::classes::OriJumpPuppet
