#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CredentialCache_CredentialEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CredentialCache_CredentialEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CredentialCache_CredentialEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_CredentialCache_CredentialEnumerator__Fields_DEFINED
struct CredentialCache;
struct ICredentials__Array;
struct __declspec(align(8)) CredentialCache_CredentialEnumerator__Fields {
    struct CredentialCache* m_cache;
    struct ICredentials__Array* m_array;
    int32_t m_index;
    int32_t m_version;
};
#endif
#if !defined(IL2CPP_STRUCT_CredentialCache_CredentialEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_CredentialCache_CredentialEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/CredentialCache.h>
#include <Modloader/app/structs/ICredentials__Array.h>
#endif
#undef IL2CPP_STRUCT_CredentialCache_CredentialEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CredentialCache_CredentialEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CredentialCache_CredentialEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/CredentialCache_CredentialEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CredentialCache_CredentialEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
