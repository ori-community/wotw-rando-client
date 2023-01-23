#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PointerUIMesh.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Ray.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::PointerUIMesh {
    IL2CPP_REGISTER_METHOD(0x01662960, void, Awake, (app::PointerUIMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01662A00, app::Vector2, MapPointerToBrowser, (app::PointerUIMesh * this_ptr, app::Vector2 screen_position, int32_t pointer_id))
    IL2CPP_REGISTER_METHOD(0x01662B90, app::Vector2, MapRayToBrowser, (app::PointerUIMesh * this_ptr, app::Ray world_ray, int32_t pointer_id))
    IL2CPP_REGISTER_METHOD(0x01662E30, void, GetCurrentHitLocation, (app::PointerUIMesh * this_ptr, app::Vector3* pos, app::Quaternion* rot))
    IL2CPP_REGISTER_METHOD(0x01663200, void, ctor, (app::PointerUIMesh * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::PointerUIMesh
