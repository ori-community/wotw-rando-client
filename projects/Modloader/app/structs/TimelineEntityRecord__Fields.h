#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineEntityRecord__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineEntityRecord__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntityRecord__Fields_DEFINED)
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/TimelineEntityRecord_EntityPlayState__Enum.h>
#include <Modloader/app/structs/TimelineEntityRecord_EntityQueue__Enum.h>
#if defined(IL2CPP_STRUCT_EntityId_DEFINED) && defined(IL2CPP_STRUCT_TimelineEntityRecord_EntityPlayState__Enum_DEFINED) && defined(IL2CPP_STRUCT_TimelineEntityRecord_EntityQueue__Enum_DEFINED)
#define IL2CPP_STRUCT_TimelineEntityRecord__Fields_DEFINED
struct TimelineConstraint;
struct MoonReference_1_Moon_Timeline_ITimelineEntity_;
struct IConstrainedEntity;
struct ITimelineEntityParent;
struct IEventReciever;
struct Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem_;
struct __declspec(align(8)) TimelineEntityRecord__Fields {
    struct TimelineConstraint* StartConstraint;
    struct TimelineConstraint* EndConstraint;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity_* Entity;
    struct EntityId Id;
    TimelineEntityRecord_EntityPlayState__Enum PlayState;

    TimelineEntityRecord_EntityQueue__Enum QueueState;

    struct IConstrainedEntity* m_constrainedEntity;
    struct ITimelineEntityParent* m_scope;
    struct IEventReciever* m_eventReciever;
    struct Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem_* m_eventHistory;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineEntityRecord__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimelineEntityRecord__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_Timeline_EventHistoryItem_.h>
#include <Modloader/app/structs/IConstrainedEntity.h>
#include <Modloader/app/structs/IEventReciever.h>
#include <Modloader/app/structs/ITimelineEntityParent.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_ITimelineEntity_.h>
#include <Modloader/app/structs/TimelineConstraint.h>
#endif
#undef IL2CPP_STRUCT_TimelineEntityRecord__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntityRecord__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimelineEntityRecord__Fields_FWDDECL)
#include <Modloader/app/structs/TimelineEntityRecord__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineEntityRecord__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
