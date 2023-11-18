#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonEffectVariationModifier.h>

namespace app::classes::Moon::EffectsFramework::MoonEffectVariationModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonEffectVariationModifier * this_ptr))
}
