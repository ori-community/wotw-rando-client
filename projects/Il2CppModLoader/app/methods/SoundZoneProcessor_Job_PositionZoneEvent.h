#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SoundZoneProcessor_Job_PositionZoneEvent {
    IL2CPP_REGISTER_METHOD(0x00120D90, void, ctor_1, (app::SoundZoneProcessor_Job_PositionZoneEvent__Boxed * this_ptr, app::SoundZoneProcessor_Job_PositionZoneEventType__Enum event_type, app::SoundZoneProcessor_Job_ZoneType__Enum zone_type, int32_t zone_index, app::Vector2 trackable_distance, bool position_changed))
    IL2CPP_REGISTER_METHOD(0x00120DC0, void, ctor_2, (app::SoundZoneProcessor_Job_PositionZoneEvent__Boxed * this_ptr, app::SoundZoneProcessor_Job_PositionZoneEventType__Enum event_type, app::SoundZoneProcessor_Job_ZoneType__Enum zone_type, int32_t zone_index))
} // namespace app::classes::SoundZoneProcessor_Job_PositionZoneEvent
