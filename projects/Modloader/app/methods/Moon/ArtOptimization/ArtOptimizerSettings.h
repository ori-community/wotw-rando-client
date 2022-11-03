#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ArtOptimization::ArtOptimizerSettings {
    IL2CPP_REGISTER_METHOD(0x01348490, bool, IsModifierTypeIgnored, (app::Type * modifier_type))
    IL2CPP_REGISTER_METHOD(0x01348600, int32_t, get_ResolutionIndex, ())
    IL2CPP_REGISTER_METHOD(0x013486A0, void, set_ResolutionIndex, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x01348780, void, cctor, ())
} // namespace app::classes::Moon::ArtOptimization::ArtOptimizerSettings
