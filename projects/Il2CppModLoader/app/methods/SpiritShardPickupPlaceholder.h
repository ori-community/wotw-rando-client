#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SpiritShardPickupPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00D68860, void, OnInstantiate, (app::SpiritShardPickupPlaceholder * this_ptr, app::GameObject* instance))
    IL2CPP_REGISTER_METHOD(0x00D68B60, void, ctor, (app::SpiritShardPickupPlaceholder * this_ptr))
} // namespace app::classes::SpiritShardPickupPlaceholder
