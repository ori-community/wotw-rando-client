#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RunActionCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RunActionCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunActionCondition_DEFINED)
#include <Modloader/app/structs/RunActionCondition__Fields.h>
#if defined(IL2CPP_STRUCT_RunActionCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_RunActionCondition_DEFINED
struct RunActionCondition__Class;
struct RunActionCondition {
    struct RunActionCondition__Class* klass;
    MonitorData* monitor;
    struct RunActionCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RunActionCondition_FWDDECL)
#define IL2CPP_STRUCT_RunActionCondition_FWDDECL
#include <Modloader/app/structs/RunActionCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_RunActionCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_RunActionCondition_DEFINED) && !defined(IL2CPP_STRUCT_RunActionCondition_FWDDECL)
#include <Modloader/app/structs/RunActionCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RunActionCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
