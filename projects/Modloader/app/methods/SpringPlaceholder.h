#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SpringPlaceholder.h>

namespace app::classes::SpringPlaceholder {
    IL2CPP_REGISTER_METHOD(0x009A8240, void, Awake, (app::SpringPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A8660, void, ctor, (app::SpringPlaceholder * this_ptr))
} // namespace app::classes::SpringPlaceholder
