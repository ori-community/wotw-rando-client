#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PickupOrbSystem {
    IL2CPP_REGISTER_METHOD(0x01159E50, app::PickupOrbSystem*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x01159EF0, void, set_Instance, (app::PickupOrbSystem * value))
    IL2CPP_REGISTER_METHOD(0x01159FA0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0115A110, void, Awake, (app::PickupOrbSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0115A1B0, void, OnDestroy, (app::PickupOrbSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0115A240, void, Register_1, (app::StretchGameObject * stretch_target))
    IL2CPP_REGISTER_METHOD(0x0115A300, void, Unregister_1, (app::StretchGameObject * stretch_target))
    IL2CPP_REGISTER_METHOD(0x0115A3C0, void, Register_2, (app::DropPickup * drop_pickup))
    IL2CPP_REGISTER_METHOD(0x0115A480, void, Unregister_2, (app::DropPickup * drop_pickup))
    IL2CPP_REGISTER_METHOD(0x0115A540, void, Register_3, (app::PickupBase * pickup))
    IL2CPP_REGISTER_METHOD(0x0115AAF0, void, Unregister_3, (app::PickupBase * pickup))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ScheduleJob, (app::PickupOrbSystem * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x0115AE20, void, FixedUpdate, (app::PickupOrbSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PickupOrbSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0115BCA0, void, cctor, ())
} // namespace app::classes::PickupOrbSystem
