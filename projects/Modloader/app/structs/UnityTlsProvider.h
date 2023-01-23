#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityTlsProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityTlsProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTlsProvider_DEFINED)
#define IL2CPP_STRUCT_UnityTlsProvider_DEFINED
struct UnityTlsProvider__Class;
struct UnityTlsProvider {
    struct UnityTlsProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UnityTlsProvider_FWDDECL)
#define IL2CPP_STRUCT_UnityTlsProvider_FWDDECL
#include <Modloader/app/structs/UnityTlsProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_UnityTlsProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTlsProvider_DEFINED) && !defined(IL2CPP_STRUCT_UnityTlsProvider_FWDDECL)
#include <Modloader/app/structs/UnityTlsProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityTlsProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
