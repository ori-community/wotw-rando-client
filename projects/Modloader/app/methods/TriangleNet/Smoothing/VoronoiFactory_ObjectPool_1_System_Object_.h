#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/VoronoiFactory_ObjectPool_1_System_Object_.h>

namespace app::classes::TriangleNet::Smoothing::VoronoiFactory_ObjectPool_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_Count, app::VoronoiFactory_ObjectPool_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A92400, int32_t, get_Capacity, app::VoronoiFactory_ObjectPool_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6DC0, void, set_Capacity, app::VoronoiFactory_ObjectPool_1_System_Object_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0225C010, void, ctor_1, app::VoronoiFactory_ObjectPool_1_System_Object_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x0225C080, void, ctor_2, app::VoronoiFactory_ObjectPool_1_System_Object_* this_ptr, app::Object__Array* pool)
    IL2CPP_REGISTER_METHOD(0x0225C0A0, bool, TryGet, app::VoronoiFactory_ObjectPool_1_System_Object_* this_ptr, app::Object** obj)
    IL2CPP_REGISTER_METHOD(0x0225C100, void, Put, app::VoronoiFactory_ObjectPool_1_System_Object_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x002FC780, void, Release, app::VoronoiFactory_ObjectPool_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0225C190, void, Resize, app::VoronoiFactory_ObjectPool_1_System_Object_* this_ptr, int32_t size)
} // namespace app::classes::TriangleNet::Smoothing::VoronoiFactory_ObjectPool_1_System_Object_
