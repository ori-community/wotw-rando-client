#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/VolumeEffectFieldFlags.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/VolumeEffectField.h>

namespace app::classes::AmplifyColor::VolumeEffectFieldFlags {
    IL2CPP_REGISTER_METHOD(0x030D33D0, void, ctor_1, (app::VolumeEffectFieldFlags * this_ptr, app::FieldInfo_1* pi))
    IL2CPP_REGISTER_METHOD(0x030D3450, void, ctor_2, (app::VolumeEffectFieldFlags * this_ptr, app::VolumeEffectField* field))
} // namespace app::classes::AmplifyColor::VolumeEffectFieldFlags
