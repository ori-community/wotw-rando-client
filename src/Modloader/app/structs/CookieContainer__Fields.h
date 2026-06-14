#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieContainer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieContainer__Fields_DEFINED)
#define IL2CPP_STRUCT_CookieContainer__Fields_DEFINED
struct Hashtable;
struct String;
struct __declspec(align(8)) CookieContainer__Fields {
    struct Hashtable* m_domainTable;
    int32_t m_maxCookieSize;
    int32_t m_maxCookies;
    int32_t m_maxCookiesPerDomain;
    int32_t m_count;
    struct String* m_fqdnMyDomain;
};
#endif
#if !defined(IL2CPP_STRUCT_CookieContainer__Fields_FWDDECL)
#define IL2CPP_STRUCT_CookieContainer__Fields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CookieContainer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieContainer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CookieContainer__Fields_FWDDECL)
#include <Modloader/app/structs/CookieContainer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieContainer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
