#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaterSplashTest.h>

namespace app::classes::WaterSplashTest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::WaterSplashTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008E4DF0, void, Update, (app::WaterSplashTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WaterSplashTest * this_ptr))
} // namespace app::classes::WaterSplashTest
