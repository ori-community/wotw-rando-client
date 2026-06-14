#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrabInGroupPlaceholder.h>

namespace app::classes::CrabInGroupPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00DB61C0, void, Spawn, app::CrabInGroupPlaceholder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DB63B0, void, ctor, app::CrabInGroupPlaceholder* this_ptr)
} // namespace app::classes::CrabInGroupPlaceholder
