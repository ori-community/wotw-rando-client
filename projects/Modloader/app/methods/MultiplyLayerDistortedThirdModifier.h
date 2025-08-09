#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MultiplyLayerDistortedThirdModifier.h>

namespace app::classes::MultiplyLayerDistortedThirdModifier {
    IL2CPP_REGISTER_METHOD(0x0087A2E0, void, ApplyMultipliers, app::MultiplyLayerDistortedThirdModifier* this_ptr, float strength, float speed)
    IL2CPP_REGISTER_METHOD(0x0087B650, void, SetProperties, app::MultiplyLayerDistortedThirdModifier* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0087B8A0, void, ctor, app::MultiplyLayerDistortedThirdModifier* this_ptr)
} // namespace app::classes::MultiplyLayerDistortedThirdModifier
