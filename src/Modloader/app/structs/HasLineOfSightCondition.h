#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HasLineOfSightCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HasLineOfSightCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasLineOfSightCondition_DEFINED)
#include <Modloader/app/structs/HasLineOfSightCondition__Fields.h>
#if defined(IL2CPP_STRUCT_HasLineOfSightCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_HasLineOfSightCondition_DEFINED
struct HasLineOfSightCondition__Class;
struct HasLineOfSightCondition {
    struct HasLineOfSightCondition__Class* klass;
    MonitorData* monitor;
    struct HasLineOfSightCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HasLineOfSightCondition_FWDDECL)
#define IL2CPP_STRUCT_HasLineOfSightCondition_FWDDECL
#include <Modloader/app/structs/HasLineOfSightCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_HasLineOfSightCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasLineOfSightCondition_DEFINED) && !defined(IL2CPP_STRUCT_HasLineOfSightCondition_FWDDECL)
#include <Modloader/app/structs/HasLineOfSightCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HasLineOfSightCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
