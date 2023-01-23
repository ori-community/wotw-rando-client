#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ChainPolicy_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ChainPolicy_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainPolicy_DEFINED)
#include <Modloader/app/structs/X509ChainPolicy__Fields.h>
#if defined(IL2CPP_STRUCT_X509ChainPolicy__Fields_DEFINED)
#define IL2CPP_STRUCT_X509ChainPolicy_DEFINED
struct X509ChainPolicy__Class;
struct X509ChainPolicy {
    struct X509ChainPolicy__Class* klass;
    MonitorData* monitor;
    struct X509ChainPolicy__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509ChainPolicy_FWDDECL)
#define IL2CPP_STRUCT_X509ChainPolicy_FWDDECL
#include <Modloader/app/structs/X509ChainPolicy__Class.h>
#endif
#undef IL2CPP_STRUCT_X509ChainPolicy_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainPolicy_DEFINED) && !defined(IL2CPP_STRUCT_X509ChainPolicy_FWDDECL)
#include <Modloader/app/structs/X509ChainPolicy.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ChainPolicy.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
