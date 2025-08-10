#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TerrainOffset.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::Demos::TerrainOffset {
    IL2CPP_REGISTER_METHOD(0x02046BD0, void, LateUpdate, app::TerrainOffset* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020471C0, app::Vector3, GetGroundHeightOffset, app::TerrainOffset* this_ptr, app::Vector3 world_position)
    IL2CPP_REGISTER_METHOD(0x020475F0, void, ctor, app::TerrainOffset* this_ptr)
} // namespace app::classes::RootMotion::Demos::TerrainOffset
