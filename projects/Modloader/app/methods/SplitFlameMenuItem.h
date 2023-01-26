#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SplitFlameMenuItem.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SplitFlameMenuItem {
    IL2CPP_REGISTER_METHOD(0x009A3220, void, ctor, (app::SplitFlameMenuItem * this_ptr, app::String* str))
    IL2CPP_REGISTER_METHOD(0x009A3310, void, OnSelectedFixedUpdate, (app::SplitFlameMenuItem * this_ptr))
} // namespace app::classes::SplitFlameMenuItem
