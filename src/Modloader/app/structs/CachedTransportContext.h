#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CachedTransportContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CachedTransportContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachedTransportContext_DEFINED)
#include <Modloader/app/structs/CachedTransportContext__Fields.h>
#if defined(IL2CPP_STRUCT_CachedTransportContext__Fields_DEFINED)
#define IL2CPP_STRUCT_CachedTransportContext_DEFINED
struct CachedTransportContext__Class;
struct CachedTransportContext {
    struct CachedTransportContext__Class* klass;
    MonitorData* monitor;
    struct CachedTransportContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CachedTransportContext_FWDDECL)
#define IL2CPP_STRUCT_CachedTransportContext_FWDDECL
#include <Modloader/app/structs/CachedTransportContext__Class.h>
#endif
#undef IL2CPP_STRUCT_CachedTransportContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CachedTransportContext_DEFINED) && !defined(IL2CPP_STRUCT_CachedTransportContext_FWDDECL)
#include <Modloader/app/structs/CachedTransportContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CachedTransportContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
