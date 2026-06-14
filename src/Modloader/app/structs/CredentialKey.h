#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CredentialKey_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CredentialKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_CredentialKey_DEFINED)
#include <Modloader/app/structs/CredentialKey__Fields.h>
#if defined(IL2CPP_STRUCT_CredentialKey__Fields_DEFINED)
#define IL2CPP_STRUCT_CredentialKey_DEFINED
struct CredentialKey__Class;
struct CredentialKey {
    struct CredentialKey__Class* klass;
    MonitorData* monitor;
    struct CredentialKey__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CredentialKey_FWDDECL)
#define IL2CPP_STRUCT_CredentialKey_FWDDECL
#include <Modloader/app/structs/CredentialKey__Class.h>
#endif
#undef IL2CPP_STRUCT_CredentialKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_CredentialKey_DEFINED) && !defined(IL2CPP_STRUCT_CredentialKey_FWDDECL)
#include <Modloader/app/structs/CredentialKey.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CredentialKey.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
