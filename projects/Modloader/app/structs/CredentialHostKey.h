#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CredentialHostKey_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CredentialHostKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_CredentialHostKey_DEFINED)
#include <Modloader/app/structs/CredentialHostKey__Fields.h>
#if defined(IL2CPP_STRUCT_CredentialHostKey__Fields_DEFINED)
#define IL2CPP_STRUCT_CredentialHostKey_DEFINED
struct CredentialHostKey__Class;
struct CredentialHostKey {
    struct CredentialHostKey__Class* klass;
    MonitorData* monitor;
    struct CredentialHostKey__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CredentialHostKey_FWDDECL)
#define IL2CPP_STRUCT_CredentialHostKey_FWDDECL
#include <Modloader/app/structs/CredentialHostKey__Class.h>
#endif
#undef IL2CPP_STRUCT_CredentialHostKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_CredentialHostKey_DEFINED) && !defined(IL2CPP_STRUCT_CredentialHostKey_FWDDECL)
#include <Modloader/app/structs/CredentialHostKey.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CredentialHostKey.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
