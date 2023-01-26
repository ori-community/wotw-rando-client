#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VolumeEffectComponent_c.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/VolumeEffectField.h>

namespace app::classes::AmplifyColor::VolumeEffectComponent___c {
    IL2CPP_REGISTER_METHOD(0x030D0BF0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::VolumeEffectComponent_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030D0D30, bool, _ListAcceptableFields_b__9_0, (app::VolumeEffectComponent_c * this_ptr, app::FieldInfo_1* f))
    IL2CPP_REGISTER_METHOD(0x00C53630, app::String*, _GetFieldNames_b__10_0, (app::VolumeEffectComponent_c * this_ptr, app::VolumeEffectField* r))
} // namespace app::classes::AmplifyColor::VolumeEffectComponent___c
