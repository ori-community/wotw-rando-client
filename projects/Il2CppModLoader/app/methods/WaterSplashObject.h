#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WaterSplashObject {
    IL2CPP_REGISTER_METHOD(0x008E2280, void, RenameToFollowObject, (app::WaterSplashObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00850FA0, void, Awake, (app::WaterSplashObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008E2370, void, OnValidate, (app::WaterSplashObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008E2380, void, Update, (app::WaterSplashObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008E3520, void, OnMoved, (app::WaterSplashObject * this_ptr, app::Vector3 speed, float delta_time))
    IL2CPP_REGISTER_METHOD(0x008E3DC0, void, UpdateMesh, (app::WaterSplashObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008E4270, void, OnDrawGizmosSelected, (app::WaterSplashObject * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008E4910, void, ctor, (app::WaterSplashObject * this_ptr))
}
