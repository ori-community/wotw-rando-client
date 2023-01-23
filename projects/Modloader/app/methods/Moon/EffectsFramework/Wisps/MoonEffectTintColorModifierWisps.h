#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonEffectTintColorModifierWisps.h>
#include <Modloader/app/structs/IMoonEffectComponentCache.h>
#include <Modloader/app/structs/MoonEffectRevertHandle.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleData.h>

namespace app::classes::Moon::EffectsFramework::Wisps::MoonEffectTintColorModifierWisps {
    IL2CPP_REGISTER_METHOD(0x0120BD20, void, Apply, (app::MoonEffectTintColorModifierWisps * this_ptr, app::IMoonEffectComponentCache* input, app::MoonEffectRevertHandle* revert_handle))
    IL2CPP_REGISTER_METHOD(0x0120C090, void, ApplyColorOnRenderer, (app::MoonEffectTintColorModifierWisps * this_ptr, app::Renderer* renderer, app::Color color, app::Color* old_color))
    IL2CPP_REGISTER_METHOD(0x0120C220, bool, IsValidRenderer, (app::MoonEffectTintColorModifierWisps * this_ptr, app::Renderer* renderer))
    IL2CPP_REGISTER_METHOD(0x0120C2F0, void, Revert, (app::MoonEffectTintColorModifierWisps * this_ptr, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData* data))
    IL2CPP_REGISTER_METHOD(0x0120B570, void, ctor, (app::MoonEffectTintColorModifierWisps * this_ptr))
} // namespace app::classes::Moon::EffectsFramework::Wisps::MoonEffectTintColorModifierWisps
