#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_EffectsFramework_IMoonEffectComposition_.h>
#include <Modloader/app/structs/MoonEffectWispsRoot.h>

namespace app::classes::Moon::EffectsFramework::Wisps::MoonEffectWispsRoot {
    IL2CPP_REGISTER_METHOD(0x0120CB20, app::List_1_Moon_EffectsFramework_IMoonEffectComposition_*, get_SubEffects, app::MoonEffectWispsRoot* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0120CC50, void, ctor, app::MoonEffectWispsRoot* this_ptr)
} // namespace app::classes::Moon::EffectsFramework::Wisps::MoonEffectWispsRoot
