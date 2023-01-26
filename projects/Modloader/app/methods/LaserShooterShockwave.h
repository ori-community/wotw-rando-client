#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LaserShooterShockwave.h>

namespace app::classes::LaserShooterShockwave {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolSpawned, (app::LaserShooterShockwave * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::LaserShooterShockwave * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F21DA0, void, ctor, (app::LaserShooterShockwave * this_ptr))
} // namespace app::classes::LaserShooterShockwave
