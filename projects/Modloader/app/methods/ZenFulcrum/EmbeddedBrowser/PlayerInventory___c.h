#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerInventory_c.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::PlayerInventory___c {
    IL2CPP_REGISTER_METHOD(0x0165F330, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::PlayerInventory_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__14_0, app::PlayerInventory_c* this_ptr, int32_t coins)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::PlayerInventory___c
