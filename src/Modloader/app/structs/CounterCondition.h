#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CounterCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CounterCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CounterCondition_DEFINED)
#include <Modloader/app/structs/CounterCondition__Fields.h>
#if defined(IL2CPP_STRUCT_CounterCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_CounterCondition_DEFINED
struct CounterCondition__Class;
struct CounterCondition {
    struct CounterCondition__Class* klass;
    MonitorData* monitor;
    struct CounterCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CounterCondition_FWDDECL)
#define IL2CPP_STRUCT_CounterCondition_FWDDECL
#include <Modloader/app/structs/CounterCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_CounterCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CounterCondition_DEFINED) && !defined(IL2CPP_STRUCT_CounterCondition_FWDDECL)
#include <Modloader/app/structs/CounterCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CounterCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
