#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WaterSplashControl {
    IL2CPP_REGISTER_METHOD(0x00623240, float, get_DeltaTime, (app::WaterSplashControl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_TimelineSamplePriority, (app::WaterSplashControl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (app::WaterSplashControl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008E0A20, void, OnDisable, (app::WaterSplashControl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008E0A90, void, Update, (app::WaterSplashControl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008E0BA0, void, SimulateAll, (app::WaterSplashControl * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x008E0D40, void, OnSplash, (app::WaterSplashControl * this_ptr, app::Vector3 pos, app::Vector3 dir, app::Vector3 speed))
    IL2CPP_REGISTER_METHOD(0x008E13A0, void, OnWaterPlaneSplash, (app::WaterSplashControl * this_ptr, app::Vector3 pos, app::Vector3 norm, app::Vector3 speed, bool is_big))
    IL2CPP_REGISTER_METHOD(0x008E18C0, void, OnDrip, (app::WaterSplashControl * this_ptr, app::Vector3 pos, app::Vector3 dir, app::Vector3 speed))
    IL2CPP_REGISTER_METHOD(0x008E1D00, void, OnWave, (app::WaterSplashControl * this_ptr, app::Vector3 pos, app::Vector3 speed, float power, float radius))
    IL2CPP_REGISTER_METHOD(0x008E1E50, void, UberWaterSplash, (app::WaterSplashControl * this_ptr, app::Vector3 pos, float power, float radius, bool tess_impact))
    IL2CPP_REGISTER_METHOD(0x008E2100, void, TimelineSample, (app::WaterSplashControl * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x008E2130, void, EnterTimelinePreview, (app::WaterSplashControl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005EA190, void, ExitTimelinePreview, (app::WaterSplashControl * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008E2150, void, ctor, (app::WaterSplashControl * this_ptr))
}
