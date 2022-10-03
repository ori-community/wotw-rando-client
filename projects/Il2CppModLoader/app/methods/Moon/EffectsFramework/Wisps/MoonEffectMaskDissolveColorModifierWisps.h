#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::EffectsFramework::Wisps::MoonEffectMaskDissolveColorModifierWisps {
    IL2CPP_REGISTER_METHOD(0x0120B580, void, Apply, (app::MoonEffectMaskDissolveColorModifierWisps * this_ptr, app::IMoonEffectComponentCache* input, app::MoonEffectRevertHandle* revert_handle))
    IL2CPP_REGISTER_METHOD(0x0120B900, bool, IsValidRenderer, (app::MoonEffectMaskDissolveColorModifierWisps * this_ptr, app::Renderer* renderer))
    IL2CPP_REGISTER_METHOD(0x0120B9D0, void, ApplyColorOnRenderer, (app::MoonEffectMaskDissolveColorModifierWisps * this_ptr, app::Renderer* renderer, app::Color color, app::Color* old_color))
    IL2CPP_REGISTER_METHOD(0x0120BB60, void, Revert, (app::MoonEffectMaskDissolveColorModifierWisps * this_ptr, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData* data))
    IL2CPP_REGISTER_METHOD(0x0120B570, void, ctor, (app::MoonEffectMaskDissolveColorModifierWisps * this_ptr))
} // namespace app::classes::Moon::EffectsFramework::Wisps::MoonEffectMaskDissolveColorModifierWisps
