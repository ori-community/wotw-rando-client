#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IllogicalCallContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IllogicalCallContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_IllogicalCallContext_DEFINED)
#include <Modloader/app/structs/IllogicalCallContext__Fields.h>
#if defined(IL2CPP_STRUCT_IllogicalCallContext__Fields_DEFINED)
#define IL2CPP_STRUCT_IllogicalCallContext_DEFINED
struct IllogicalCallContext__Class;
struct IllogicalCallContext {
    struct IllogicalCallContext__Class* klass;
    MonitorData* monitor;
    struct IllogicalCallContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IllogicalCallContext_FWDDECL)
#define IL2CPP_STRUCT_IllogicalCallContext_FWDDECL
#include <Modloader/app/structs/IllogicalCallContext__Class.h>
#endif
#undef IL2CPP_STRUCT_IllogicalCallContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_IllogicalCallContext_DEFINED) && !defined(IL2CPP_STRUCT_IllogicalCallContext_FWDDECL)
#include <Modloader/app/structs/IllogicalCallContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IllogicalCallContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
