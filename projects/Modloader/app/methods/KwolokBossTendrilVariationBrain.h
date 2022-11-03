#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::KwolokBossTendrilVariationBrain {
    IL2CPP_REGISTER_METHOD(0x012F0C30, void, Start, (app::KwolokBossTendrilVariationBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F0CC0, app::Enum__Array*, GetEntries, (app::KwolokBossTendrilVariationBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012F0D50, app::Enum, Evaluate, (app::KwolokBossTendrilVariationBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::KwolokBossTendrilVariationBrain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::KwolokBossTendrilVariationBrain * this_ptr))
} // namespace app::classes::KwolokBossTendrilVariationBrain
