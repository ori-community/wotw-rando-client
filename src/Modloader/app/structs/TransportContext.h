#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransportContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransportContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransportContext_DEFINED)
#define IL2CPP_STRUCT_TransportContext_DEFINED
struct TransportContext__Class;
struct TransportContext {
    struct TransportContext__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TransportContext_FWDDECL)
#define IL2CPP_STRUCT_TransportContext_FWDDECL
#include <Modloader/app/structs/TransportContext__Class.h>
#endif
#undef IL2CPP_STRUCT_TransportContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransportContext_DEFINED) && !defined(IL2CPP_STRUCT_TransportContext_FWDDECL)
#include <Modloader/app/structs/TransportContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransportContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
