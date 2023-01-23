#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/VerletSoftInteraction.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/UberInteractionActor.h>

namespace app::classes::VerletSoftInteraction {
    IL2CPP_REGISTER_METHOD(0x013C8520, app::Bounds, get_Bounds, (app::VerletSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatic, (app::VerletSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057AAC0, int32_t, get_Index, (app::VerletSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C08D30, void, set_Index, (app::VerletSoftInteraction * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsRegistered, (app::VerletSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsRegistered, (app::VerletSoftInteraction * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00614BA0, bool, get_WantsToRegister, (app::VerletSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00614BB0, void, set_WantsToRegister, (app::VerletSoftInteraction * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsWater, (app::VerletSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C86C0, void, OnEnable, (app::VerletSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C87F0, void, OnDisable, (app::VerletSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRegistered, (app::VerletSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C8920, float, MaxRadius, (app::VerletSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RemoveInteraction, (app::VerletSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013C8930, void, SetInteraction, (app::VerletSoftInteraction * this_ptr, float time, app::Vector3 pos, app::Vector3 prev_pos, app::Vector4 strength, app::Vector3 velocity, float radius, bool explosion, bool force_play, app::UberInteractionActor* actor))
    IL2CPP_REGISTER_METHOD(0x013C8C10, bool, DoesOverlap, (app::VerletSoftInteraction * this_ptr, app::Vector3 interaction_position, app::Vector3 velocity, float interaction_radius, float z_scale))
    IL2CPP_REGISTER_METHOD(0x013C8E70, app::Vector3, GetPosition, (app::VerletSoftInteraction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, GetExplodePoint, (app::VerletSoftInteraction * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x013C8EE0, void, ctor, (app::VerletSoftInteraction * this_ptr))
} // namespace app::classes::VerletSoftInteraction
