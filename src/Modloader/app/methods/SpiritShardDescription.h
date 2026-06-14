#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritShardDescription.h>

namespace app::classes::SpiritShardDescription {
    IL2CPP_REGISTER_METHOD(0x00D67A50, int32_t, get_BuyCost, app::SpiritShardDescription* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D67B60, void, ctor, app::SpiritShardDescription* this_ptr)
} // namespace app::classes::SpiritShardDescription
