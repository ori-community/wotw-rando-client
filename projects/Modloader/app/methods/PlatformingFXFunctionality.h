#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlatformingFXFunctionality.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/TimeDistanceGate.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::PlatformingFXFunctionality {
    IL2CPP_REGISTER_METHOD(0x011720B0, void, ctor, (app::PlatformingFXFunctionality * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01172310, void, Land_1, (app::PlatformingFXFunctionality * this_ptr, app::Vector3 position, app::Collider* collider, app::Vector3 relative_velocity))
    IL2CPP_REGISTER_METHOD(0x01172480, void, Land_2, (app::PlatformingFXFunctionality * this_ptr, app::Vector3 position, app::SurfaceMaterialType__Enum material_type, app::Vector3 velocity))
    IL2CPP_REGISTER_METHOD(0x011725F0, bool, Play, (app::PlatformingFXFunctionality * this_ptr, app::GameObject* effect, app::Event_1* sound_event, app::Vector3 position, app::TimeDistanceGate* gate))
    IL2CPP_REGISTER_METHOD(0x01172A00, void, WallHitLeft_1, (app::PlatformingFXFunctionality * this_ptr, app::Vector3 position, app::Collider* collider, app::Vector2 velocity))
    IL2CPP_REGISTER_METHOD(0x01172B50, void, WallHitRight_1, (app::PlatformingFXFunctionality * this_ptr, app::Vector3 position, app::Collider* collider, app::Vector2 velocity))
    IL2CPP_REGISTER_METHOD(0x01172CA0, void, WallHitLeft_2, (app::PlatformingFXFunctionality * this_ptr, app::Vector3 position, app::SurfaceMaterialType__Enum material_type, app::Vector2 velocity))
    IL2CPP_REGISTER_METHOD(0x01172DF0, void, WallHitRight_2, (app::PlatformingFXFunctionality * this_ptr, app::Vector3 position, app::SurfaceMaterialType__Enum material_type, app::Vector2 velocity))
    IL2CPP_REGISTER_METHOD(0x01172F40, void, FootstepDetail, (app::PlatformingFXFunctionality * this_ptr, app::Vector3 position, app::SurfaceMaterialType__Enum material_type))
    IL2CPP_REGISTER_METHOD(0x011731C0, void, LeftEdgeStop_1, (app::PlatformingFXFunctionality * this_ptr, app::Vector3 position, app::Collider* collider, app::Vector2 velocity))
    IL2CPP_REGISTER_METHOD(0x01173310, void, LeftEdgeStop_2, (app::PlatformingFXFunctionality * this_ptr, app::Vector3 position, app::SurfaceMaterialType__Enum material_type, app::Vector2 velocity))
    IL2CPP_REGISTER_METHOD(0x01173460, void, RightEdgeStop_1, (app::PlatformingFXFunctionality * this_ptr, app::Vector3 position, app::Collider* collider, app::Vector2 velocity))
    IL2CPP_REGISTER_METHOD(0x011735B0, void, RightEdgeStop_2, (app::PlatformingFXFunctionality * this_ptr, app::Vector3 position, app::SurfaceMaterialType__Enum material_type, app::Vector2 velocity))
} // namespace app::classes::PlatformingFXFunctionality
