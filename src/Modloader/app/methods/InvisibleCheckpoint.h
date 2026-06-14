#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InvisibleCheckpoint.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::InvisibleCheckpoint {
    IL2CPP_REGISTER_METHOD(0x00643F40, app::Rect, get_Bounds, app::InvisibleCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00643F50, void, Awake, app::InvisibleCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006440F0, void, OnDestroy, app::InvisibleCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C15C0, void, OnRestoreCheckpoint, app::InvisibleCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00644280, bool, CanCreateCheckpoint, app::InvisibleCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006444B0, bool, get_WithinBound, app::InvisibleCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006445D0, void, FixedUpdate, app::InvisibleCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C15C0, void, OnCheckpointCreated, app::InvisibleCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006447C0, void, CreateCheckpoint, app::InvisibleCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00644AF0, bool, GetCheckpointGroundPosition, app::InvisibleCheckpoint* this_ptr, app::Vector3* pos, app::Vector3 target)
    IL2CPP_REGISTER_METHOD(0x00644E70, bool, GetSeinGroundPosition_1, app::Vector3* pos, app::Vector3 target, float cast_offset_scalar)
    IL2CPP_REGISTER_METHOD(0x00645140, bool, GetSeinGroundPosition_2, app::Vector3* pos, app::Vector3 target, app::Vector3 offset, float radius_diff)
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::SelectableCategory__Enum, get_Category, app::InvisibleCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00645590, app::Rect, CalculateBounds, app::InvisibleCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006458E0, void, ctor, app::InvisibleCheckpoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00645A80, void, cctor, )
} // namespace app::classes::InvisibleCheckpoint
