#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::EffectsFramework::MoonEffectEmissionRateModifier {
    IL2CPP_REGISTER_METHOD(0x019809B0, void, Apply, (app::MoonEffectEmissionRateModifier * this_ptr, app::IMoonEffectComponentCache * input, app::MoonEffectRevertHandle * revert_handle))
    IL2CPP_REGISTER_METHOD(0x019811A0, void, Revert, (app::MoonEffectEmissionRateModifier * this_ptr, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData * data))
    IL2CPP_REGISTER_METHOD(0x00B17FD0, void, ctor, (app::MoonEffectEmissionRateModifier * this_ptr))
}
