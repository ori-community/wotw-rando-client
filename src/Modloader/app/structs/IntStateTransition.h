#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntStateTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntStateTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntStateTransition_DEFINED)
#include <Modloader/app/structs/IntStateTransition__Fields.h>
#if defined(IL2CPP_STRUCT_IntStateTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_IntStateTransition_DEFINED
struct IntStateTransition__Class;
struct IntStateTransition {
    struct IntStateTransition__Class* klass;
    MonitorData* monitor;
    struct IntStateTransition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntStateTransition_FWDDECL)
#define IL2CPP_STRUCT_IntStateTransition_FWDDECL
#include <Modloader/app/structs/IntStateTransition__Class.h>
#endif
#undef IL2CPP_STRUCT_IntStateTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntStateTransition_DEFINED) && !defined(IL2CPP_STRUCT_IntStateTransition_FWDDECL)
#include <Modloader/app/structs/IntStateTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntStateTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
