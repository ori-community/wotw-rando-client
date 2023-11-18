#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineHelper_EverythingConstrainedTo_d_28__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineHelper_EverythingConstrainedTo_d_28__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineHelper_EverythingConstrainedTo_d_28__Fields_DEFINED)
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_Timeline_TimelineEntityRecord_.h>
#if defined(IL2CPP_STRUCT_EntityId_DEFINED) && defined(IL2CPP_STRUCT_List_1_T_Enumerator_Moon_Timeline_TimelineEntityRecord__DEFINED)
#define IL2CPP_STRUCT_TimelineHelper_EverythingConstrainedTo_d_28__Fields_DEFINED
struct TimelineEntityRecord;
struct ITimelineEntityParent;
struct __declspec(align(8)) TimelineHelper_EverythingConstrainedTo_d_28__Fields {
    int32_t __1__state;
    struct TimelineEntityRecord* __2__current;
    int32_t __l__initialThreadId;
    struct ITimelineEntityParent* owningTimeline;
    struct ITimelineEntityParent* __3__owningTimeline;
    struct EntityId recordEntityId;
    struct EntityId __3__recordEntityId;
    struct List_1_T_Enumerator_Moon_Timeline_TimelineEntityRecord_ __7__wrap1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineHelper_EverythingConstrainedTo_d_28__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimelineHelper_EverythingConstrainedTo_d_28__Fields_FWDDECL
#include <Modloader/app/structs/ITimelineEntityParent.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>
#endif
#undef IL2CPP_STRUCT_TimelineHelper_EverythingConstrainedTo_d_28__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineHelper_EverythingConstrainedTo_d_28__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimelineHelper_EverythingConstrainedTo_d_28__Fields_FWDDECL)
#include <Modloader/app/structs/TimelineHelper_EverythingConstrainedTo_d_28__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineHelper_EverythingConstrainedTo_d_28__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
