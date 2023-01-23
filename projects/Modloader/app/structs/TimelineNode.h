#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineNode_DEFINED)
#include <Modloader/app/structs/TimelineNode__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineNode__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineNode_DEFINED
struct TimelineNode__Class;
struct TimelineNode {
    struct TimelineNode__Class* klass;
    MonitorData* monitor;
    struct TimelineNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineNode_FWDDECL)
#define IL2CPP_STRUCT_TimelineNode_FWDDECL
#include <Modloader/app/structs/TimelineNode__Class.h>
#endif
#undef IL2CPP_STRUCT_TimelineNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineNode_DEFINED) && !defined(IL2CPP_STRUCT_TimelineNode_FWDDECL)
#include <Modloader/app/structs/TimelineNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
