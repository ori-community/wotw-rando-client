#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>
#include <Modloader/app/structs/ITimelineEntityParent.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/TimelineMarkerRecord.h>
#include <Modloader/app/structs/ExternalTimelineRecord.h>

namespace app::classes::Moon::Timeline::TimelineExtensions {
    IL2CPP_REGISTER_METHOD(0x01E878B0, app::TimelineEntityRecord*, GetEntityFor_1, (app::ITimelineEntityParent * timeline, app::EntityId entity_id))
    IL2CPP_REGISTER_METHODINFO(0x0470F7D0, TimelineExtensions_GetEntityFor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E87AD0, app::TimelineEntityRecord*, GetEntityForSafe, (app::ITimelineEntityParent * timeline, app::EntityId entity_id))
    IL2CPP_REGISTER_METHOD(0x01E87BE0, app::TimelineEntityRecord*, GetEntityFor_2, (app::ITimelineEntityParent * timeline, app::ITimelineEntity* entity))
    IL2CPP_REGISTER_METHODINFO(0x0473CBF8, TimelineExtensions_GetEntityFor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E87D90, app::TimelineMarkerRecord*, GetMarkerFor, (app::ITimelineEntityParent * timeline, app::EntityId entity_id))
    IL2CPP_REGISTER_METHODINFO(0x04751A88, TimelineExtensions_GetMarkerFor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E87FA0, app::TimelineMarkerRecord*, GetMarkerForSafe, (app::ITimelineEntityParent * timeline, app::EntityId entity_id))
    IL2CPP_REGISTER_METHOD(0x01E88140, app::ExternalTimelineRecord*, GetExternalFor, (app::ITimelineEntityParent * timeline, app::EntityId entity_id))
    IL2CPP_REGISTER_METHODINFO(0x04783000, TimelineExtensions_GetExternalFor__MethodInfo)
} // namespace app::classes::Moon::Timeline::TimelineExtensions
