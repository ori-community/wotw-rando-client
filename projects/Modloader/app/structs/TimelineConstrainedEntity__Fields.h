#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineConstrainedEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineConstrainedEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineConstrainedEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineConstrainedEntity__Fields_DEFINED
struct TimelineEntityRecord;
struct __declspec(align(8)) TimelineConstrainedEntity__Fields {
    struct TimelineEntityRecord* m_timelineEntityRecord;
};
#endif
#if !defined(IL2CPP_STRUCT_TimelineConstrainedEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimelineConstrainedEntity__Fields_FWDDECL
#include <Modloader/app/structs/TimelineEntityRecord.h>
#endif
#undef IL2CPP_STRUCT_TimelineConstrainedEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineConstrainedEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimelineConstrainedEntity__Fields_FWDDECL)
#include <Modloader/app/structs/TimelineConstrainedEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineConstrainedEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
