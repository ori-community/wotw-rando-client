#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonEffectCollisionModifierWisps.h>
#include <Modloader/app/structs/IMoonEffectComponentCache.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleData.h>
#include <Modloader/app/structs/MoonEffectRevertHandle.h>

namespace app::classes::Moon::EffectsFramework::Wisps::MoonEffectCollisionModifierWisps {
    IL2CPP_REGISTER_METHOD(0x01209790, void, Apply, (app::MoonEffectCollisionModifierWisps * this_ptr, app::IMoonEffectComponentCache* input, app::MoonEffectRevertHandle* revert_handle))
    IL2CPP_REGISTER_METHOD(0x01209A30, void, Revert, (app::MoonEffectCollisionModifierWisps * this_ptr, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData* data))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonEffectCollisionModifierWisps * this_ptr))
} // namespace app::classes::Moon::EffectsFramework::Wisps::MoonEffectCollisionModifierWisps
