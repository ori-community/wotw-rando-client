#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieCollection_CookieCollectionEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieCollection_CookieCollectionEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieCollection_CookieCollectionEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_CookieCollection_CookieCollectionEnumerator__Fields_DEFINED
struct CookieCollection;
struct __declspec(align(8)) CookieCollection_CookieCollectionEnumerator__Fields {
    struct CookieCollection* m_cookies;
    int32_t m_count;
    int32_t m_index;
    int32_t m_version;
};
#endif
#if !defined(IL2CPP_STRUCT_CookieCollection_CookieCollectionEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_CookieCollection_CookieCollectionEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/CookieCollection.h>
#endif
#undef IL2CPP_STRUCT_CookieCollection_CookieCollectionEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieCollection_CookieCollectionEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CookieCollection_CookieCollectionEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/CookieCollection_CookieCollectionEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieCollection_CookieCollectionEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
