#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineEntityStateCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineEntityStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntityStateCondition_DEFINED)
#include <Modloader/app/structs/TimelineEntityStateCondition__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntityStateCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineEntityStateCondition_DEFINED
struct TimelineEntityStateCondition__Class;
struct TimelineEntityStateCondition {
    struct TimelineEntityStateCondition__Class* klass;
    MonitorData* monitor;
    struct TimelineEntityStateCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineEntityStateCondition_FWDDECL)
#define IL2CPP_STRUCT_TimelineEntityStateCondition_FWDDECL
#include <Modloader/app/structs/TimelineEntityStateCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineEntityStateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineEntityStateCondition_DEFINED) && !defined(IL2CPP_STRUCT_TimelineEntityStateCondition_FWDDECL)
#include <Modloader/app/structs/TimelineEntityStateCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineEntityStateCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
