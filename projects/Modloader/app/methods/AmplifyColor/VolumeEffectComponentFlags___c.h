#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/VolumeEffectComponentFlags_c.h>
#include <Modloader/app/structs/VolumeEffectFieldFlags.h>

namespace app::classes::AmplifyColor::VolumeEffectComponentFlags___c {
    IL2CPP_REGISTER_METHOD(0x030D2110, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::VolumeEffectComponentFlags_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0060CE90, bool, _GetFieldNames_b__8_0, app::VolumeEffectComponentFlags_c* this_ptr, app::VolumeEffectFieldFlags* r)
    IL2CPP_REGISTER_METHOD(0x00C53630, app::String*, _GetFieldNames_b__8_1, app::VolumeEffectComponentFlags_c* this_ptr, app::VolumeEffectFieldFlags* r)
} // namespace app::classes::AmplifyColor::VolumeEffectComponentFlags___c
