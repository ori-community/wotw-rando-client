#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/WaterFall.h>
#include <Modloader/app/structs/WaterFall_WaterLine.h>

namespace app::classes::Moon::WaterFall {
    IL2CPP_REGISTER_METHOD(0x011A3DC0, void, Awake, app::WaterFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0068B8C0, bool, get_IsSuspended, app::WaterFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00757000, void, set_IsSuspended, app::WaterFall* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x011A4510, app::SuspendableMask__Enum, get_Mask, app::WaterFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A4520, void, set_Mask, app::WaterFall* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x011A45E0, void, OnEnable, app::WaterFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A4680, void, OnDisable, app::WaterFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A4720, void, OnDestroy, app::WaterFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A4810, void, FixedUpdate, app::WaterFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A62F0, void, RemoveWaterLine, app::WaterFall* this_ptr, app::WaterFall_WaterLine* water_line)
    IL2CPP_REGISTER_METHOD(0x011A65F0, void, CreateLineRenderer, app::WaterFall* this_ptr, app::WaterFall_WaterLine* water_line)
    IL2CPP_REGISTER_METHOD(0x011A6B10, app::ParticleSystem*, CreateImpactEffect, app::WaterFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A6D80, void, OnFrustumEnter, app::WaterFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A6E30, void, OnFrustumExit, app::WaterFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FB00D0, bool, get_InsideFrustum, app::WaterFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A6EE0, void, set_InsideFrustum, app::WaterFall* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x011A6EF0, app::Bounds, get_Bounds, app::WaterFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_AllowCacheBounds, app::WaterFall* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011A7130, void, ctor, app::WaterFall* this_ptr)
} // namespace app::classes::Moon::WaterFall
