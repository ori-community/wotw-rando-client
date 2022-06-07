#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EnemyStopper {
    IL2CPP_REGISTER_METHOD(0x00C85E40, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00C85F10, bool, InsideEnemyStopper_1, (app::Vector3 position, app::Vector3 direction, bool * does_contain))
    IL2CPP_REGISTER_METHOD(0x00C86210, bool, InsideEnemyStopper_2, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00C863E0, void, Awake, (app::EnemyStopper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C86620, void, OnDestroy, (app::EnemyStopper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, (app::EnemyStopper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EnemyStopper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C86700, void, cctor, ())
}
