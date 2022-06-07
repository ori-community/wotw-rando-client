#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedPlant {
    IL2CPP_REGISTER_METHOD(0x014E92D0, void, Awake, (app::PetrifiedPlant * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E9490, void, OnDestroy, (app::PetrifiedPlant * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014E9650, void, OnPreProcessDamage, (app::PetrifiedPlant * this_ptr, app::Damage * damage))
    IL2CPP_REGISTER_METHODINFO(0x0478D020, PetrifiedPlant_OnPreProcessDamage__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00443680, void, ctor, (app::PetrifiedPlant * this_ptr))
}
