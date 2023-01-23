#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ChainStatus__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ChainStatus__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainStatus__Boxed_DEFINED)
#include <Modloader/app/structs/X509ChainStatus.h>
#if defined(IL2CPP_STRUCT_X509ChainStatus_DEFINED)
#define IL2CPP_STRUCT_X509ChainStatus__Boxed_DEFINED
struct X509ChainStatus__Class;
struct X509ChainStatus__Boxed {
    struct X509ChainStatus__Class* klass;
    MonitorData* monitor;
    struct X509ChainStatus fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509ChainStatus__Boxed_FWDDECL)
#define IL2CPP_STRUCT_X509ChainStatus__Boxed_FWDDECL
#include <Modloader/app/structs/X509ChainStatus__Class.h>
#endif
#undef IL2CPP_STRUCT_X509ChainStatus__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainStatus__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_X509ChainStatus__Boxed_FWDDECL)
#include <Modloader/app/structs/X509ChainStatus__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ChainStatus__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
