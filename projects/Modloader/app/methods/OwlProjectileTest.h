#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OwlProjectileTest.h>

namespace app::classes::OwlProjectileTest {
    IL2CPP_REGISTER_METHOD(0x00443690, void, Awake, (app::OwlProjectileTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004437B0, void, Update, (app::OwlProjectileTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443860, void, ShootL, (app::OwlProjectileTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443A30, void, ShootR, (app::OwlProjectileTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateEntries, (app::OwlProjectileTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443C00, void, ctor, (app::OwlProjectileTest * this_ptr))
} // namespace app::classes::OwlProjectileTest
