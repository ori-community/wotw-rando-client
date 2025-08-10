#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FixedDurationSceneEntity.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ITrimController.h>
#include <Modloader/app/structs/List_1_Moon_MoonReference_1__2.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ConstraintsMetaData_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ExternalTimelineRecord_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_IEventDescriptor_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TimelineEntityRecord_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TimelineMarkerRecord_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_ITimelineEntity_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UpdateCategory__Enum.h>

namespace app::classes::Moon::Timeline::FixedDurationSceneEntity {
    IL2CPP_REGISTER_METHOD(0x00417920, app::UpdateCategory__Enum, get_UpdateCategory, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076A4A0, app::String*, get_FullAddress, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076A590, bool, get_IsWorldMapScene, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076A6A0, bool, get_AllowTimesliceEnable, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076A6C0, void, OnStartPlayback, app::FixedDurationSceneEntity* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0076AC20, bool, IsSceneEnabled, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076AD90, void, LoadScene, app::FixedDurationSceneEntity* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0076AFF0, void, OnUpdateEntity, app::FixedDurationSceneEntity* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0076B500, void, OnLoadedScene_1, app::FixedDurationSceneEntity* this_ptr, bool success)
    IL2CPP_REGISTER_METHOD(0x0076B520, void, OnLoadedScene_2, app::FixedDurationSceneEntity* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0076BA80, void, OnStopPlayback, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076BCB0, void, OnPausePlayback, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076BDA0, void, OnResumePlayback, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076BE90, app::List_1_Moon_Timeline_TimelineEntityRecord_*, get_EntityRecords, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076C1D0, app::List_1_Moon_Timeline_ConstraintsMetaData_*, get_ConstraintMetaDatas, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076C220, app::List_1_Moon_Timeline_TimelineMarkerRecord_*, get_MarkerRecords, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076C370, app::List_1_Moon_Timeline_ExternalTimelineRecord_*, get_ExternalRecords, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_CurrentTime, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076C3C0, void, RecursivelySetupExecutionOrder, app::FixedDurationSceneEntity* this_ptr, int32_t order)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::MoonReference_1_Moon_Timeline_ITimelineEntity_*, get_ActiveTimeline, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076C6A0, app::List_1_Moon_MoonReference_1__2*, get_Timelines, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0076C7B0, bool, ApproximateEvent, app::FixedDurationSceneEntity* this_ptr, int32_t evt, float* time)
    IL2CPP_REGISTER_METHOD(0x0076C7C0, app::List_1_Moon_Timeline_IEventDescriptor_*, get_Events, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::ITrimController*, get_TrimController, app::FixedDurationSceneEntity* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_TrimController, app::FixedDurationSceneEntity* this_ptr, app::ITrimController* value)
    IL2CPP_REGISTER_METHOD(0x0076CAF0, void, CollectEvents, app::FixedDurationSceneEntity* this_ptr, app::List_1_Moon_Timeline_IEventDescriptor_* events)
    IL2CPP_REGISTER_METHOD(0x0076CC50, void, ctor, app::FixedDurationSceneEntity* this_ptr)
} // namespace app::classes::Moon::Timeline::FixedDurationSceneEntity
