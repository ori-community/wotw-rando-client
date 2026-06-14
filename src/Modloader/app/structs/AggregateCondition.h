#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AggregateCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AggregateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AggregateCondition_DEFINED)
#include <Modloader/app/structs/AggregateCondition__Fields.h>
#if defined(IL2CPP_STRUCT_AggregateCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_AggregateCondition_DEFINED
struct AggregateCondition__Class;
struct AggregateCondition {
    struct AggregateCondition__Class* klass;
    MonitorData* monitor;
    struct AggregateCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AggregateCondition_FWDDECL)
#define IL2CPP_STRUCT_AggregateCondition_FWDDECL
#include <Modloader/app/structs/AggregateCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_AggregateCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_AggregateCondition_DEFINED) && !defined(IL2CPP_STRUCT_AggregateCondition_FWDDECL)
#include <Modloader/app/structs/AggregateCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AggregateCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
