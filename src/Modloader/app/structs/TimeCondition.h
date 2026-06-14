#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeCondition_DEFINED)
#include <Modloader/app/structs/TimeCondition__Fields.h>
#if defined(IL2CPP_STRUCT_TimeCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeCondition_DEFINED
struct TimeCondition__Class;
struct TimeCondition {
    struct TimeCondition__Class* klass;
    MonitorData* monitor;
    struct TimeCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeCondition_FWDDECL)
#define IL2CPP_STRUCT_TimeCondition_FWDDECL
#include <Modloader/app/structs/TimeCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeCondition_DEFINED) && !defined(IL2CPP_STRUCT_TimeCondition_FWDDECL)
#include <Modloader/app/structs/TimeCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
