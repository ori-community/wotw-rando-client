#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProbabilityCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProbabilityCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProbabilityCondition_DEFINED)
#include <Modloader/app/structs/ProbabilityCondition__Fields.h>
#if defined(IL2CPP_STRUCT_ProbabilityCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_ProbabilityCondition_DEFINED
struct ProbabilityCondition__Class;
struct ProbabilityCondition {
    struct ProbabilityCondition__Class* klass;
    MonitorData* monitor;
    struct ProbabilityCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProbabilityCondition_FWDDECL)
#define IL2CPP_STRUCT_ProbabilityCondition_FWDDECL
#include <Modloader/app/structs/ProbabilityCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_ProbabilityCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProbabilityCondition_DEFINED) && !defined(IL2CPP_STRUCT_ProbabilityCondition_FWDDECL)
#include <Modloader/app/structs/ProbabilityCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProbabilityCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
