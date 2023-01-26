#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConstraintFlag__Enum.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/TimelineConstraint.h>

namespace app::classes::Moon::Timeline::TimelineConstraint {
    IL2CPP_REGISTER_METHOD(0x0052A010, app::ConstraintFlag__Enum, get_Flags, (app::TimelineConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_Dirty, (app::TimelineConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC410, void, set_Dirty, (app::TimelineConstraint * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_CachedValue, (app::TimelineConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E83AA0, void, set_CachedValue, (app::TimelineConstraint * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_EventId, (app::TimelineConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_EventId, (app::TimelineConstraint * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::EntityId, get_ConstrainedTo, (app::TimelineConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_TimeOffset, (app::TimelineConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E83AB0, void, ConstrainTo, (app::TimelineConstraint * this_ptr, app::EntityId entity, float offset, int32_t constraint_type))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, SetConstraintToUnsafe, (app::TimelineConstraint * this_ptr, app::EntityId id))
    IL2CPP_REGISTER_METHOD(0x01E83AD0, void, SetTimeOffset, (app::TimelineConstraint * this_ptr, float time_offset))
    IL2CPP_REGISTER_METHOD(0x01E83BA0, app::TimelineConstraint*, Copy, (app::TimelineConstraint * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E83D00, void, ctor, (app::TimelineConstraint * this_ptr))
} // namespace app::classes::Moon::Timeline::TimelineConstraint
