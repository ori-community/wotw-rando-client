#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VolumeEffectFlags_c.h>
#include <Modloader/app/structs/VolumeEffectComponentFlags.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AmplifyColor::VolumeEffectFlags___c {
    IL2CPP_REGISTER_METHOD(0x030D4700, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::VolumeEffectFlags_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060CE90, bool, _GetComponentNames_b__7_0, (app::VolumeEffectFlags_c * this_ptr, app::VolumeEffectComponentFlags* r))
    IL2CPP_REGISTER_METHODINFO(0x047952B8, VolumeEffectFlags_c__GetComponentNames_b__7_0__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C53630, app::String*, _GetComponentNames_b__7_1, (app::VolumeEffectFlags_c * this_ptr, app::VolumeEffectComponentFlags* r))
    IL2CPP_REGISTER_METHODINFO(0x04752690, VolumeEffectFlags_c__GetComponentNames_b__7_1__MethodInfo)
} // namespace app::classes::AmplifyColor::VolumeEffectFlags___c
