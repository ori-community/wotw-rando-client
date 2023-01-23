#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CustomTimelineConstraint.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/ConstraintFlag__Enum.h>

namespace app::classes::Moon::Timeline::CustomTimelineConstraint {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Dirty, (app::CustomTimelineConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_Dirty, (app::CustomTimelineConstraint * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00B83F30, float, get_CachedValue, (app::CustomTimelineConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B83F40, void, set_CachedValue, (app::CustomTimelineConstraint * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_EventId, (app::CustomTimelineConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_EventId, (app::CustomTimelineConstraint * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0052A010, app::EntityId, get_ConstrainedTo, (app::CustomTimelineConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A020, void, set_ConstrainedTo, (app::CustomTimelineConstraint * this_ptr, app::EntityId value))
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_TimeOffset, (app::CustomTimelineConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529E80, app::ConstraintFlag__Enum, get_Flags, (app::CustomTimelineConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529E90, void, set_Flags, (app::CustomTimelineConstraint * this_ptr, app::ConstraintFlag__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CustomTimelineConstraint * this_ptr))
} // namespace app::classes::Moon::Timeline::CustomTimelineConstraint
