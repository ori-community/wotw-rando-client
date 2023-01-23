#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WaterSplashParticleSystem.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::WaterSplashParticleSystem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::WaterSplashParticleSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::WaterSplashParticleSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008E49E0, void, OnParticleCollision, (app::WaterSplashParticleSystem * this_ptr, app::GameObject* other))
    IL2CPP_REGISTER_METHOD(0x008223A0, void, ctor, (app::WaterSplashParticleSystem * this_ptr))
} // namespace app::classes::WaterSplashParticleSystem
