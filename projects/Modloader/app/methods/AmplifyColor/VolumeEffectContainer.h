#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AmplifyColorBase.h>
#include <Modloader/app/structs/AmplifyColorBase__Array.h>
#include <Modloader/app/structs/VolumeEffect.h>
#include <Modloader/app/structs/VolumeEffectContainer.h>

namespace app::classes::AmplifyColor::VolumeEffectContainer {
    IL2CPP_REGISTER_METHOD(0x030D22D0, void, ctor, app::VolumeEffectContainer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D2420, void, AddColorEffect, app::VolumeEffectContainer* this_ptr, app::AmplifyColorBase* color_effect)
    IL2CPP_REGISTER_METHOD(0x030D25C0, app::VolumeEffect*, AddJustColorEffect, app::VolumeEffectContainer* this_ptr, app::AmplifyColorBase* color_effect)
    IL2CPP_REGISTER_METHOD(0x030D2730, app::VolumeEffect*, FindVolumeEffect, app::VolumeEffectContainer* this_ptr, app::AmplifyColorBase* color_effect)
    IL2CPP_REGISTER_METHOD(0x030D2A20, void, RemoveVolumeEffect, app::VolumeEffectContainer* this_ptr, app::VolumeEffect* volume)
    IL2CPP_REGISTER_METHOD(0x030D2AC0, app::AmplifyColorBase__Array*, GetStoredEffects, app::VolumeEffectContainer* this_ptr)
} // namespace app::classes::AmplifyColor::VolumeEffectContainer
