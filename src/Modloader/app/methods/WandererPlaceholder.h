#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WandererPlaceholder.h>

namespace app::classes::WandererPlaceholder {
    IL2CPP_REGISTER_METHOD(0x008D1780, void, InstantiateFromPooledObj, app::WandererPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008D1880, void, ctor, app::WandererPlaceholder* this_ptr)
} // namespace app::classes::WandererPlaceholder
