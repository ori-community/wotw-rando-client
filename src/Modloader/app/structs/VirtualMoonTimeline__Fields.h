#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VirtualMoonTimeline__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VirtualMoonTimeline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualMoonTimeline__Fields_DEFINED)
#include <Modloader/app/structs/EntityOperationPermit__Enum.h>
#if defined(IL2CPP_STRUCT_EntityOperationPermit__Enum_DEFINED)
#define IL2CPP_STRUCT_VirtualMoonTimeline__Fields_DEFINED
struct String;
struct PlaybackStatus;
struct List_1_Moon_Timeline_ConstraintsMetaData_;
struct List_1_Moon_Timeline_TimelineMarkerRecord_;
struct List_1_Moon_Timeline_ExternalTimelineRecord_;
struct List_1_Moon_Timeline_TimelineEntityRecord_;
struct VirtualTimelineEntityPool;
struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity_;
struct ITrimController;
struct __declspec(align(8)) VirtualMoonTimeline__Fields {
    struct String* m_name;
    struct PlaybackStatus* _PlaybackStatus_k__BackingField;
    bool _ExpandedByDefault_k__BackingField;
    struct List_1_Moon_Timeline_ConstraintsMetaData_* _ConstraintMetaDatas_k__BackingField;
    struct List_1_Moon_Timeline_TimelineMarkerRecord_* _MarkerRecords_k__BackingField;
    struct List_1_Moon_Timeline_ExternalTimelineRecord_* _ExternalRecords_k__BackingField;
    struct List_1_Moon_Timeline_TimelineEntityRecord_* _EntityRecords_k__BackingField;
    struct VirtualTimelineEntityPool* m_pool;
    EntityOperationPermit__Enum RemoveChildPermit;

    struct Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity_* OnChildRemoveCustomHandling;
    bool _ShouldHideHeader_k__BackingField;
    bool _UseHorizontalCollapse_k__BackingField;
    struct ITrimController* _TrimController_k__BackingField;
    struct String* _FullAddress_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VirtualMoonTimeline__Fields_FWDDECL)
#define IL2CPP_STRUCT_VirtualMoonTimeline__Fields_FWDDECL
#include <Modloader/app/structs/Action_2_Moon_Timeline_EntityId_Moon_Timeline_ITimelineEntity_.h>
#include <Modloader/app/structs/ITrimController.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ConstraintsMetaData_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_ExternalTimelineRecord_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TimelineEntityRecord_.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_TimelineMarkerRecord_.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/VirtualTimelineEntityPool.h>
#endif
#undef IL2CPP_STRUCT_VirtualMoonTimeline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualMoonTimeline__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VirtualMoonTimeline__Fields_FWDDECL)
#include <Modloader/app/structs/VirtualMoonTimeline__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VirtualMoonTimeline__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
