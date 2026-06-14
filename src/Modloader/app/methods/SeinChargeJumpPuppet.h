#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinChargeJumpPuppet.h>

namespace app::classes::SeinChargeJumpPuppet {
    IL2CPP_REGISTER_METHOD(0x004AB2B0, int32_t, get_Id, app::SeinChargeJumpPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, app::SeinChargeJumpPuppet* this_ptr)
} // namespace app::classes::SeinChargeJumpPuppet
