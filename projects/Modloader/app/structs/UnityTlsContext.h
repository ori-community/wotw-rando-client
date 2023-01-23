#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityTlsContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityTlsContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTlsContext_DEFINED)
#include <Modloader/app/structs/UnityTlsContext__Fields.h>
#if defined(IL2CPP_STRUCT_UnityTlsContext__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityTlsContext_DEFINED
struct UnityTlsContext__Class;
struct UnityTlsContext {
    struct UnityTlsContext__Class* klass;
    MonitorData* monitor;
    struct UnityTlsContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityTlsContext_FWDDECL)
#define IL2CPP_STRUCT_UnityTlsContext_FWDDECL
#include <Modloader/app/structs/UnityTlsContext__Class.h>
#endif
#undef IL2CPP_STRUCT_UnityTlsContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTlsContext_DEFINED) && !defined(IL2CPP_STRUCT_UnityTlsContext_FWDDECL)
#include <Modloader/app/structs/UnityTlsContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityTlsContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
