#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/PolygonJumpGridEntry.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PolygonJumpGridEntry {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_EntryName, (app::PolygonJumpGridEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C5DAB0, app::Color, get_CellColor, (app::PolygonJumpGridEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C5DB90, bool, Contains, (app::PolygonJumpGridEntry * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00C5DCC0, void, CalculateBoundingBox, (app::PolygonJumpGridEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C5DFF0, void, ctor, (app::PolygonJumpGridEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C5E1F0, void, cctor, ())
} // namespace app::classes::PolygonJumpGridEntry
