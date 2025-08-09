#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/SpiritShardsScreen_c.h>

namespace app::classes::SpiritShardsScreen___c {
    IL2CPP_REGISTER_METHOD(0x00D76530, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SpiritShardsScreen_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D76670, bool, _FocusOnPreviousSelection_b__78_0, app::SpiritShardsScreen_c* this_ptr, app::CleverMenuItem* a)
} // namespace app::classes::SpiritShardsScreen___c
