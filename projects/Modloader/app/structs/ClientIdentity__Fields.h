#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClientIdentity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClientIdentity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientIdentity__Fields_DEFINED)
#include <Modloader/app/structs/Identity__Fields.h>
#if defined(IL2CPP_STRUCT_Identity__Fields_DEFINED)
#define IL2CPP_STRUCT_ClientIdentity__Fields_DEFINED
struct WeakReference;
struct ClientIdentity__Fields {
    struct Identity__Fields _;
    struct WeakReference* _proxyReference;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClientIdentity__Fields_FWDDECL)
#define IL2CPP_STRUCT_ClientIdentity__Fields_FWDDECL
#include <Modloader/app/structs/WeakReference.h>
#endif
#undef IL2CPP_STRUCT_ClientIdentity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClientIdentity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ClientIdentity__Fields_FWDDECL)
#include <Modloader/app/structs/ClientIdentity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClientIdentity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
