#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OidEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OidEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OidEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_OidEnumerator__Fields_DEFINED
struct OidCollection;
struct __declspec(align(8)) OidEnumerator__Fields {
    struct OidCollection* m_oids;
    int32_t m_current;
};
#endif
#if !defined(IL2CPP_STRUCT_OidEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_OidEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/OidCollection.h>
#endif
#undef IL2CPP_STRUCT_OidEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OidEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OidEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/OidEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OidEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
