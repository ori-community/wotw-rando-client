#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinPickupProcessor_c.h>

namespace app::classes::SeinPickupProcessor___c {
    IL2CPP_REGISTER_METHOD(0x008B7BB0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SeinPickupProcessor_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B7CF0, void, _OnFinishedReading_b__48_0, (app::SeinPickupProcessor_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B7D80, void, _OnCollectMaxEnergyHalfContainerPickup_b__56_2, (app::SeinPickupProcessor_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B7E50, void, _OnCollectMaxEnergyHalfContainerPickup_b__56_3, (app::SeinPickupProcessor_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B7F20, void, _OnCollectMaxHealthHalfContainerPickup_b__62_2, (app::SeinPickupProcessor_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008B7FF0, void, _OnCollectMaxHealthHalfContainerPickup_b__62_3, (app::SeinPickupProcessor_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__70_0, (app::SeinPickupProcessor_c * this_ptr))
} // namespace app::classes::SeinPickupProcessor___c
