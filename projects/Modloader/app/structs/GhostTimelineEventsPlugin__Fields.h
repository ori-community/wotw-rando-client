#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostTimelineEventsPlugin__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostTimelineEventsPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin__Fields_DEFINED)
#include <Modloader/app/structs/IGhostRecorderPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_IGhostRecorderPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostTimelineEventsPlugin__Fields_DEFINED
struct Queue_1_GhostTimelineEventsPlugin_PendingEvent_;
struct Dictionary_2_System_Int64_System_Single_;
struct HashSet_1_System_Int64_;
struct GlobalRecordingTable;
struct GhostTimelineEventsPlugin__Fields {
    struct IGhostRecorderPlugin__Fields _;
    struct Queue_1_GhostTimelineEventsPlugin_PendingEvent_* m_pendingEvents;
    struct Dictionary_2_System_Int64_System_Single_* m_entitiesStartTimes;
    struct HashSet_1_System_Int64_* m_entitiesStartedButNotFinished;
    struct GlobalRecordingTable* _GlobalRecordingTable_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostTimelineEventsPlugin__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int64_System_Single_.h>
#include <Modloader/app/structs/GlobalRecordingTable.h>
#include <Modloader/app/structs/HashSet_1_System_Int64_.h>
#include <Modloader/app/structs/Queue_1_GhostTimelineEventsPlugin_PendingEvent_.h>
#endif
#undef IL2CPP_STRUCT_GhostTimelineEventsPlugin__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin__Fields_FWDDECL)
#include <Modloader/app/structs/GhostTimelineEventsPlugin__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostTimelineEventsPlugin__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
