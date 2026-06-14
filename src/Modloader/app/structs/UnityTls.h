#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityTls_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityTls_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTls_DEFINED)
#define IL2CPP_STRUCT_UnityTls_DEFINED
struct UnityTls__Class;
struct UnityTls {
    struct UnityTls__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UnityTls_FWDDECL)
#define IL2CPP_STRUCT_UnityTls_FWDDECL
#include <Modloader/app/structs/UnityTls__Class.h>
#endif
#undef IL2CPP_STRUCT_UnityTls_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTls_DEFINED) && !defined(IL2CPP_STRUCT_UnityTls_FWDDECL)
#include <Modloader/app/structs/UnityTls.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityTls.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
