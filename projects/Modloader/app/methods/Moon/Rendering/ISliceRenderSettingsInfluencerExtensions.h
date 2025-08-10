#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ISliceRenderSettingsInfluencer.h>

namespace app::classes::Moon::Rendering::ISliceRenderSettingsInfluencerExtensions {
    IL2CPP_REGISTER_METHOD(0x0078D1B0, int32_t, EffectiveOrder, app::ISliceRenderSettingsInfluencer* influencer)
}
