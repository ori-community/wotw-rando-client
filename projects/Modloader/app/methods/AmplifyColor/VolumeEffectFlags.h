#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AmplifyColorBase.h>
#include <Modloader/app/structs/AmplifyColorBase__Array.h>
#include <Modloader/app/structs/AmplifyColorVolumeBase__Array.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/VolumeEffect.h>
#include <Modloader/app/structs/VolumeEffectComponentFlags.h>
#include <Modloader/app/structs/VolumeEffectFlags.h>

namespace app::classes::AmplifyColor::VolumeEffectFlags {
    IL2CPP_REGISTER_METHOD(0x030D3480, void, ctor, app::VolumeEffectFlags* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030D35D0, void, AddComponent, app::VolumeEffectFlags* this_ptr, app::Component_1* c)
    IL2CPP_REGISTER_METHOD(0x030D3930, void, UpdateFlags, app::VolumeEffectFlags* this_ptr, app::VolumeEffect* effect_vol)
    IL2CPP_REGISTER_METHOD(0x030D3D70, void, UpdateCamFlags, app::AmplifyColorBase__Array* effects, app::AmplifyColorVolumeBase__Array* volumes)
    IL2CPP_REGISTER_METHOD(0x030D3FB0, app::VolumeEffect*, GenerateEffectData, app::VolumeEffectFlags* this_ptr, app::AmplifyColorBase* go)
    IL2CPP_REGISTER_METHOD(0x030D4250, app::VolumeEffectComponentFlags*, FindComponentFlags, app::VolumeEffectFlags* this_ptr, app::String* comp_name)
    IL2CPP_REGISTER_METHOD(0x030D43B0, app::String__Array*, GetComponentNames, app::VolumeEffectFlags* this_ptr)
} // namespace app::classes::AmplifyColor::VolumeEffectFlags
