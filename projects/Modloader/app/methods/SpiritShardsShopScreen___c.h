#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SpiritShardsShopScreen_c.h>

namespace app::classes::SpiritShardsShopScreen___c {
    IL2CPP_REGISTER_METHOD(0x00D7B710, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SpiritShardsShopScreen_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D7B850, bool, _FocusOnPreviousSelection_b__64_0, app::SpiritShardsShopScreen_c* this_ptr, app::CleverMenuItem* a)
    IL2CPP_REGISTER_METHOD(
        0x00D7B940,
        int32_t,
        _PopulateInventoryCanvasWithShards_b__68_0,
        app::SpiritShardsShopScreen_c* this_ptr,
        app::Object* x,
        app::Object* y
    )
} // namespace app::classes::SpiritShardsShopScreen___c
