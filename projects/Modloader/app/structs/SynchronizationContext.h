#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SynchronizationContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SynchronizationContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SynchronizationContext_DEFINED)
#include <Modloader/app/structs/SynchronizationContext__Fields.h>
#if defined(IL2CPP_STRUCT_SynchronizationContext__Fields_DEFINED)
#define IL2CPP_STRUCT_SynchronizationContext_DEFINED
struct SynchronizationContext__Class;
struct SynchronizationContext {
    struct SynchronizationContext__Class* klass;
    MonitorData* monitor;
    struct SynchronizationContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SynchronizationContext_FWDDECL)
#define IL2CPP_STRUCT_SynchronizationContext_FWDDECL
#include <Modloader/app/structs/SynchronizationContext__Class.h>
#endif
#undef IL2CPP_STRUCT_SynchronizationContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SynchronizationContext_DEFINED) && !defined(IL2CPP_STRUCT_SynchronizationContext_FWDDECL)
#include <Modloader/app/structs/SynchronizationContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SynchronizationContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
