#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinDamageReceiverPuppet.h>

namespace app::classes::SeinDamageReceiverPuppet {
    IL2CPP_REGISTER_METHOD(0x006E4170, int32_t, get_Id, app::SeinDamageReceiverPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, app::SeinDamageReceiverPuppet* this_ptr)
} // namespace app::classes::SeinDamageReceiverPuppet
