#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/VolumeEffectComponent.h>
#include <Modloader/app/structs/VolumeEffectComponentFlags.h>

namespace app::classes::AmplifyColor::VolumeEffectComponentFlags {
    IL2CPP_REGISTER_METHOD(0x030D0DF0, void, ctor_1, app::VolumeEffectComponentFlags* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x030D0F50, void, ctor_2, app::VolumeEffectComponentFlags* this_ptr, app::VolumeEffectComponent* comp)
    IL2CPP_REGISTER_METHOD(0x030D11F0, void, ctor_3, app::VolumeEffectComponentFlags* this_ptr, app::Component_1* c)
    IL2CPP_REGISTER_METHOD(0x030D1480, void, UpdateComponentFlags_1, app::VolumeEffectComponentFlags* this_ptr, app::VolumeEffectComponent* comp)
    IL2CPP_REGISTER_METHOD(0x030D18E0, void, UpdateComponentFlags_2, app::VolumeEffectComponentFlags* this_ptr, app::Component_1* c)
    IL2CPP_REGISTER_METHOD(0x030D1DC0, app::String__Array*, GetFieldNames, app::VolumeEffectComponentFlags* this_ptr)
} // namespace app::classes::AmplifyColor::VolumeEffectComponentFlags
