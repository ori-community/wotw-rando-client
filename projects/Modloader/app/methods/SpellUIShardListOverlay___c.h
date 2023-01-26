#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpellUIShardListOverlay_c.h>
#include <Modloader/app/structs/SpiritShardUIItem.h>

namespace app::classes::SpellUIShardListOverlay___c {
    IL2CPP_REGISTER_METHOD(0x00951180, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SpellUIShardListOverlay_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__32_0, (app::SpellUIShardListOverlay_c * this_ptr, app::SpiritShardUIItem* _p0_))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__32_1, (app::SpellUIShardListOverlay_c * this_ptr))
} // namespace app::classes::SpellUIShardListOverlay___c
