#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/PetrifiedPlant.h>

namespace app::classes::PetrifiedPlant {
    IL2CPP_REGISTER_METHOD(0x014E92D0, void, Awake, app::PetrifiedPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014E9490, void, OnDestroy, app::PetrifiedPlant* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014E9650, void, OnPreProcessDamage, app::PetrifiedPlant* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00443680, void, ctor, app::PetrifiedPlant* this_ptr)
} // namespace app::classes::PetrifiedPlant
