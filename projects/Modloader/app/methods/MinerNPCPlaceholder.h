#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MinerNPCPlaceholder.h>

namespace app::classes::MinerNPCPlaceholder {
    IL2CPP_REGISTER_METHOD(0x0144E390, void, InstantiateFromPooledObj, app::MinerNPCPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004181F0, void, ctor, app::MinerNPCPlaceholder* this_ptr)
} // namespace app::classes::MinerNPCPlaceholder
