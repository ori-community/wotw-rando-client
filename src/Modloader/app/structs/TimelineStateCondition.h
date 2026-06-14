#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineStateCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineStateCondition_DEFINED)
#include <Modloader/app/structs/TimelineStateCondition__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineStateCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineStateCondition_DEFINED
struct TimelineStateCondition__Class;
struct TimelineStateCondition {
    struct TimelineStateCondition__Class* klass;
    MonitorData* monitor;
    struct TimelineStateCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineStateCondition_FWDDECL)
#define IL2CPP_STRUCT_TimelineStateCondition_FWDDECL
#include <Modloader/app/structs/TimelineStateCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineStateCondition_DEFINED) && !defined(IL2CPP_STRUCT_TimelineStateCondition_FWDDECL)
#include <Modloader/app/structs/TimelineStateCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineStateCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
