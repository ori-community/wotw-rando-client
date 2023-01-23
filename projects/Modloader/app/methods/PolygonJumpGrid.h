#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PolygonJumpGrid.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/PolygonJumpGridEntry.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PolygonJumpGrid {
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, Init, (app::PolygonJumpGrid * this_ptr, app::ILocomotionTurningHandler* turning_handler))
    IL2CPP_REGISTER_METHOD(0x00C5D1D0, app::PolygonJumpGridEntry*, GetEntryForPoint, (app::PolygonJumpGrid * this_ptr, app::Vector3 point, bool can_be_null))
    IL2CPP_REGISTER_METHOD(0x00C5D4A0, app::PolygonJumpGridEntry*, GetEntryForPointDescendingOrder, (app::PolygonJumpGrid * this_ptr, app::Vector3 point, bool can_be_null))
    IL2CPP_REGISTER_METHOD(0x00C5D720, void, OnDrawGizmos, (app::PolygonJumpGrid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C5D950, void, ctor, (app::PolygonJumpGrid * this_ptr))
} // namespace app::classes::PolygonJumpGrid
