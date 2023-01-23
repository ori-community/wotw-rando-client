#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VolumeEffectContainer_c.h>
#include <Modloader/app/structs/AmplifyColorBase.h>
#include <Modloader/app/structs/VolumeEffect.h>

namespace app::classes::AmplifyColor::VolumeEffectContainer___c {
    IL2CPP_REGISTER_METHOD(0x030D2CB0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::VolumeEffectContainer_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C53630, app::AmplifyColorBase*, _GetStoredEffects_b__6_0, (app::VolumeEffectContainer_c * this_ptr, app::VolumeEffect* r))
    IL2CPP_REGISTER_METHODINFO(0x0472CD00, VolumeEffectContainer_c__GetStoredEffects_b__6_0__MethodInfo)
} // namespace app::classes::AmplifyColor::VolumeEffectContainer___c
