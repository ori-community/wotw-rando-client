#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AmplifyColor::VolumeEffectContainer {
    IL2CPP_REGISTER_METHOD(0x030D22D0, void, ctor, (app::VolumeEffectContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030D2420, void, AddColorEffect, (app::VolumeEffectContainer * this_ptr, app::AmplifyColorBase * color_effect))
    IL2CPP_REGISTER_METHOD(0x030D25C0, app::VolumeEffect *, AddJustColorEffect, (app::VolumeEffectContainer * this_ptr, app::AmplifyColorBase * color_effect))
    IL2CPP_REGISTER_METHOD(0x030D2730, app::VolumeEffect *, FindVolumeEffect, (app::VolumeEffectContainer * this_ptr, app::AmplifyColorBase * color_effect))
    IL2CPP_REGISTER_METHOD(0x030D2A20, void, RemoveVolumeEffect, (app::VolumeEffectContainer * this_ptr, app::VolumeEffect * volume))
    IL2CPP_REGISTER_METHOD(0x030D2AC0, app::AmplifyColorBase__Array *, GetStoredEffects, (app::VolumeEffectContainer * this_ptr))
}
