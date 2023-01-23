#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ScenarioProxyEntity.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TimelineEntityRecord_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ConstraintsMetaData_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TimelineMarkerRecord_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ExternalTimelineRecord_.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__2.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_ITimelineEntity_.h>
#include <Modloader/app/structs/ITrimController.h>
#include <Modloader/app/structs/ScenarioRoot.h>

namespace app::classes::Moon::Timeline::ScenarioProxyEntity {
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::String*, get_FilePath, (app::ScenarioProxyEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnValidate, (app::ScenarioProxyEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00782670, app::String*, get_FullAddress, (app::ScenarioProxyEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00782760, app::MoonTimeline*, get_ExternalTimeline, (app::ScenarioProxyEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00782840, app::List_1_Moon_Timeline_TimelineEntityRecord_*, get_EntityRecords, (app::ScenarioProxyEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00782C80, app::List_1_Moon_Timeline_ConstraintsMetaData_*, get_ConstraintMetaDatas, (app::ScenarioProxyEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795F98, ScenarioProxyEntity_get_ConstraintMetaDatas__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00782CD0, app::List_1_Moon_Timeline_TimelineMarkerRecord_*, get_MarkerRecords, (app::ScenarioProxyEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00782E20, app::List_1_Moon_Timeline_ExternalTimelineRecord_*, get_ExternalRecords, (app::ScenarioProxyEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04781DD0, ScenarioProxyEntity_get_ExternalRecords__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::List_1_Moon_MoonReference_1__2*, get_Timelines, (app::ScenarioProxyEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_Timelines, (app::ScenarioProxyEntity * this_ptr, app::List_1_Moon_MoonReference_1__2* value))
    IL2CPP_REGISTER_METHOD(0x002FBC80, app::MoonReference_1_Moon_Timeline_ITimelineEntity_*, get_ActiveTimeline, (app::ScenarioProxyEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC90, void, set_ActiveTimeline, (app::ScenarioProxyEntity * this_ptr, app::MoonReference_1_Moon_Timeline_ITimelineEntity_* value))
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_CurrentTime, (app::ScenarioProxyEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCA0, app::ITrimController*, get_TrimController, (app::ScenarioProxyEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCB0, void, set_TrimController, (app::ScenarioProxyEntity * this_ptr, app::ITrimController* value))
    IL2CPP_REGISTER_METHOD(0x00782E70, void, SetScenario, (app::ScenarioProxyEntity * this_ptr, app::ScenarioRoot* root))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, HasFinished, (app::ScenarioProxyEntity * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RecursivelySetupExecutionOrder, (app::ScenarioProxyEntity * this_ptr, int32_t order))
    IL2CPP_REGISTER_METHOD(0x007830D0, bool, ApproximateEvent, (app::ScenarioProxyEntity * this_ptr, int32_t evt, float* time))
    IL2CPP_REGISTER_METHOD(0x00783200, void, ctor, (app::ScenarioProxyEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::ScenarioProxyEntity
