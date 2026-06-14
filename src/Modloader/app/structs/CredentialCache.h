#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CredentialCache_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CredentialCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_CredentialCache_DEFINED)
#include <Modloader/app/structs/CredentialCache__Fields.h>
#if defined(IL2CPP_STRUCT_CredentialCache__Fields_DEFINED)
#define IL2CPP_STRUCT_CredentialCache_DEFINED
struct CredentialCache__Class;
struct CredentialCache {
    struct CredentialCache__Class* klass;
    MonitorData* monitor;
    struct CredentialCache__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CredentialCache_FWDDECL)
#define IL2CPP_STRUCT_CredentialCache_FWDDECL
#include <Modloader/app/structs/CredentialCache__Class.h>
#endif
#undef IL2CPP_STRUCT_CredentialCache_INITIALIZING
#if !defined(IL2CPP_STRUCT_CredentialCache_DEFINED) && !defined(IL2CPP_STRUCT_CredentialCache_FWDDECL)
#include <Modloader/app/structs/CredentialCache.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CredentialCache.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
