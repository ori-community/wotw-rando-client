#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpellUISeeds.h>

namespace app::classes::SpellUISeeds {
    IL2CPP_REGISTER_METHOD(0x0094F260, void, FixedUpdate, (app::SpellUISeeds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0094D540, bool, CanSpend, (app::SpellUISeeds * this_ptr, int32_t amount))
    IL2CPP_REGISTER_METHOD(0x0094F410, bool, Spend, (app::SpellUISeeds * this_ptr, int32_t amount))
    IL2CPP_REGISTER_METHOD(0x0094D720, void, ctor, (app::SpellUISeeds * this_ptr))
} // namespace app::classes::SpellUISeeds
