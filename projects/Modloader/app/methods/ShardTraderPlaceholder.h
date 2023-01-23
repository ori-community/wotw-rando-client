#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ShardTraderPlaceholder.h>

namespace app::classes::ShardTraderPlaceholder {
    IL2CPP_REGISTER_METHOD(0x005AF9D0, void, InstantiateFromPooledObj, (app::ShardTraderPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B0010, void, ctor, (app::ShardTraderPlaceholder * this_ptr))
} // namespace app::classes::ShardTraderPlaceholder
