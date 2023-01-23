#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CookieManager__StaticFields_DEFINED
struct CookieManager_CookieFetch;
struct CookieManager__StaticFields {
    struct CookieManager_CookieFetch* currentFetch;
};
#endif
#if !defined(IL2CPP_STRUCT_CookieManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CookieManager__StaticFields_FWDDECL
#include <Modloader/app/structs/CookieManager_CookieFetch.h>
#endif
#undef IL2CPP_STRUCT_CookieManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CookieManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/CookieManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
