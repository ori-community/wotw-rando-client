#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CartographerPlaceholder.h>

namespace app::classes::CartographerPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00B47330, void, InstantiateInstance, app::CartographerPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004181F0, void, ctor, app::CartographerPlaceholder* this_ptr)
} // namespace app::classes::CartographerPlaceholder
