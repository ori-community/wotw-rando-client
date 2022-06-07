#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::TimelineConstrainedEntity {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::TimelineConstrainedEntity * this_ptr, app::TimelineEntityRecord * timeline_entity_record))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::IConstraint *, get_StartConstraint, (app::TimelineConstrainedEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173F0, app::IConstraint *, get_EndConstraint, (app::TimelineConstrainedEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E83750, app::EntityId, get_EntityId, (app::TimelineConstrainedEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E83770, bool, HasFinished, (app::TimelineConstrainedEntity * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x01E83790, app::ITimelineEntity *, get_Entity, (app::TimelineConstrainedEntity * this_ptr))
}
