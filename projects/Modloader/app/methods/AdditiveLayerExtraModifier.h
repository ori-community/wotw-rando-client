#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AdditiveLayerExtraModifier.h>

namespace app::classes::AdditiveLayerExtraModifier {
    IL2CPP_REGISTER_METHOD(0x004CA7C0, void, ApplyMultipliers, (app::AdditiveLayerExtraModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x004CA800, void, SetProperties, (app::AdditiveLayerExtraModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004CA930, void, ctor, (app::AdditiveLayerExtraModifier * this_ptr))
} // namespace app::classes::AdditiveLayerExtraModifier
