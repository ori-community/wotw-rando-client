#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ChainImplMono_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ChainImplMono_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainImplMono_DEFINED)
#include <Modloader/app/structs/X509ChainImplMono__Fields.h>
#if defined(IL2CPP_STRUCT_X509ChainImplMono__Fields_DEFINED)
#define IL2CPP_STRUCT_X509ChainImplMono_DEFINED
struct X509ChainImplMono__Class;
struct X509ChainImplMono {
    struct X509ChainImplMono__Class* klass;
    MonitorData* monitor;
    struct X509ChainImplMono__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_X509ChainImplMono_FWDDECL)
#define IL2CPP_STRUCT_X509ChainImplMono_FWDDECL
#include <Modloader/app/structs/X509ChainImplMono__Class.h>
#endif
#undef IL2CPP_STRUCT_X509ChainImplMono_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainImplMono_DEFINED) && !defined(IL2CPP_STRUCT_X509ChainImplMono_FWDDECL)
#include <Modloader/app/structs/X509ChainImplMono.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ChainImplMono.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
