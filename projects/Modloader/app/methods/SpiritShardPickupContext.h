#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritShardPickupContext.h>

namespace app::classes::SpiritShardPickupContext {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SpiritShardPickupContext * this_ptr))
}
