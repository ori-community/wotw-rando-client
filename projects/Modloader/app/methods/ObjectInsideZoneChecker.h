#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/ObjectInsideZoneChecker.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/VirtualTimelineRepresentationGroup__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ObjectInsideZoneChecker {
    IL2CPP_REGISTER_METHOD(0x005C3FE0, app::Rect, get_Bounds, (app::ObjectInsideZoneChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsInside, (app::ObjectInsideZoneChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060E860, bool, IsPositionInside, (app::ObjectInsideZoneChecker * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0060E8B0, void, FixedUpdate, (app::ObjectInsideZoneChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060E8C0, void, UpdateBounds, (app::ObjectInsideZoneChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060E8B0, void, Awake, (app::ObjectInsideZoneChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060EB80, app::Vector3, GetSize, (app::ObjectInsideZoneChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060EEC0, bool, Validate, (app::ObjectInsideZoneChecker * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, get_VirtualTimelineTarget, (app::ObjectInsideZoneChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, app::VirtualTimelineRepresentationGroup__Enum, get_VirtualTimelineGroup, (app::ObjectInsideZoneChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C65D0, app::String*, get_NameDisplayedOnClip, (app::ObjectInsideZoneChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060EEE0, void, ctor, (app::ObjectInsideZoneChecker * this_ptr))
} // namespace app::classes::ObjectInsideZoneChecker
