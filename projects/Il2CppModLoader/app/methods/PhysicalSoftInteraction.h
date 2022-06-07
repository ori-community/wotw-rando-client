#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PhysicalSoftInteraction {
    IL2CPP_REGISTER_METHOD(0x003FF610, int32_t, get_Index, (app::PhysicalSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F083C0, void, set_Index, (app::PhysicalSoftInteraction * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003FF790, bool, get_IsRegistered, (app::PhysicalSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF7A0, void, set_IsRegistered, (app::PhysicalSoftInteraction * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x014EE790, bool, get_WantsToRegister, (app::PhysicalSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014EE7A0, void, set_WantsToRegister, (app::PhysicalSoftInteraction * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x014EE7B0, app::Bounds, get_Bounds, (app::PhysicalSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatic, (app::PhysicalSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsWater, (app::PhysicalSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014EE950, void, OnEnable, (app::PhysicalSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014EEAD0, void, OnDisable, (app::PhysicalSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014EEC00, void, Awake, (app::PhysicalSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRegistered, (app::PhysicalSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014EECD0, float, MaxRadius, (app::PhysicalSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RemoveInteraction, (app::PhysicalSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014EECE0, void, SetInteraction, (app::PhysicalSoftInteraction * this_ptr, float time, app::Vector3 pos, app::Vector3 prev_pos, app::Vector4 strength, app::Vector3 velocity, float radius, bool explosion, bool force_play, app::UberInteractionActor * actor))
    IL2CPP_REGISTER_METHOD(0x014EEFA0, bool, DoesOverlap, (app::PhysicalSoftInteraction * this_ptr, app::Vector3 position, app::Vector3 velocity, float interaction_radius, float z_scale))
    IL2CPP_REGISTER_METHOD(0x00D3D6A0, app::Vector3, GetPosition, (app::PhysicalSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, GetExplodePoint, (app::PhysicalSoftInteraction * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x014EF200, void, OnDrawGizmosSelected, (app::PhysicalSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014EF300, void, ctor, (app::PhysicalSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014EF3E0, void, cctor, ())
}
