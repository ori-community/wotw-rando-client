#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AggregateNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AggregateNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_AggregateNode_DEFINED)
#include <Modloader/app/structs/AggregateNode__Fields.h>
#if defined(IL2CPP_STRUCT_AggregateNode__Fields_DEFINED)
#define IL2CPP_STRUCT_AggregateNode_DEFINED
struct AggregateNode__Class;
struct AggregateNode {
    struct AggregateNode__Class* klass;
    MonitorData* monitor;
    struct AggregateNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AggregateNode_FWDDECL)
#define IL2CPP_STRUCT_AggregateNode_FWDDECL
#include <Modloader/app/structs/AggregateNode__Class.h>
#endif
#undef IL2CPP_STRUCT_AggregateNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_AggregateNode_DEFINED) && !defined(IL2CPP_STRUCT_AggregateNode_FWDDECL)
#include <Modloader/app/structs/AggregateNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AggregateNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
