#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::EffectsFramework::Wisps::MoonEffectEmissivityModifierWisps {
    IL2CPP_REGISTER_METHOD(0x01209C00, void, Apply, (app::MoonEffectEmissivityModifierWisps * this_ptr, app::IMoonEffectComponentCache * input, app::MoonEffectRevertHandle * revert_handle))
    IL2CPP_REGISTER_METHOD(0x0120A030, void, ApplySettingsToRenderer, (app::MoonEffectEmissivityModifierWisps * this_ptr, app::Renderer * renderer, app::Color color, float spread_mulitplier, float intensity_multiplier, app::Color * old_color, app::Vector4 * old_properties))
    IL2CPP_REGISTER_METHOD(0x0120A240, bool, IsValidRenderer, (app::MoonEffectEmissivityModifierWisps * this_ptr, app::Renderer * renderer))
    IL2CPP_REGISTER_METHOD(0x0120A310, void, Revert, (app::MoonEffectEmissivityModifierWisps * this_ptr, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData * data))
    IL2CPP_REGISTER_METHOD(0x0120A4F0, void, ctor, (app::MoonEffectEmissivityModifierWisps * this_ptr))
}
