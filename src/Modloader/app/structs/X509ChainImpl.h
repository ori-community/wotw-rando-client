#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_X509ChainImpl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_X509ChainImpl_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainImpl_DEFINED)
#define IL2CPP_STRUCT_X509ChainImpl_DEFINED
struct X509ChainImpl__Class;
struct X509ChainImpl {
    struct X509ChainImpl__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_X509ChainImpl_FWDDECL)
#define IL2CPP_STRUCT_X509ChainImpl_FWDDECL
#include <Modloader/app/structs/X509ChainImpl__Class.h>
#endif
#undef IL2CPP_STRUCT_X509ChainImpl_INITIALIZING
#if !defined(IL2CPP_STRUCT_X509ChainImpl_DEFINED) && !defined(IL2CPP_STRUCT_X509ChainImpl_FWDDECL)
#include <Modloader/app/structs/X509ChainImpl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/X509ChainImpl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
