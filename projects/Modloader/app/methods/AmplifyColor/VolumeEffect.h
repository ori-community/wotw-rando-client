#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AmplifyColor::VolumeEffect {
    IL2CPP_REGISTER_METHOD(0x030CD060, void, ctor, (app::VolumeEffect * this_ptr, app::AmplifyColorBase* effect))
    IL2CPP_REGISTER_METHOD(0x030CD1C0, app::VolumeEffect*, BlendValuesToVolumeEffect, (app::VolumeEffectFlags * flags, app::VolumeEffect* volume1, app::VolumeEffect* volume2, float blend))
    IL2CPP_REGISTER_METHOD(0x030CDBC0, app::VolumeEffectComponent*, AddComponent, (app::VolumeEffect * this_ptr, app::Component_1* c, app::VolumeEffectComponentFlags* comp_flags))
    IL2CPP_REGISTER_METHOD(0x030CDEB0, void, RemoveEffectComponent, (app::VolumeEffect * this_ptr, app::VolumeEffectComponent* comp))
    IL2CPP_REGISTER_METHOD(0x030CDF50, void, UpdateVolume, (app::VolumeEffect * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030CE170, void, SetValues, (app::VolumeEffect * this_ptr, app::AmplifyColorBase* target_color))
    IL2CPP_REGISTER_METHOD(0x030CE8A0, void, BlendValues, (app::VolumeEffect * this_ptr, app::AmplifyColorBase* target_color, app::VolumeEffect* other, float blend_amount))
    IL2CPP_REGISTER_METHOD(0x030CF0B0, app::VolumeEffectComponent*, FindEffectComponent, (app::VolumeEffect * this_ptr, app::String* comp_name))
    IL2CPP_REGISTER_METHOD(0x030CF210, app::Component_1__Array*, ListAcceptableComponents, (app::AmplifyColorBase * go))
    IL2CPP_REGISTER_METHOD(0x030CF500, app::String__Array*, GetComponentNames, (app::VolumeEffect * this_ptr))
} // namespace app::classes::AmplifyColor::VolumeEffect
