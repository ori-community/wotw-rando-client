#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieManager_CookieFetch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieManager_CookieFetch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieManager_CookieFetch__Fields_DEFINED)
#define IL2CPP_STRUCT_CookieManager_CookieFetch__Fields_DEFINED
struct BrowserNative_GetCookieFunc;
struct Promise_1_System_Collections_Generic_List_1_;
struct CookieManager;
struct List_1_ZenFulcrum_EmbeddedBrowser_Cookie_;
struct __declspec(align(8)) CookieManager_CookieFetch__Fields {
    struct BrowserNative_GetCookieFunc* nativeCB;
    struct Promise_1_System_Collections_Generic_List_1_* promise;
    struct CookieManager* manager;
    struct List_1_ZenFulcrum_EmbeddedBrowser_Cookie_* result;
};
#endif
#if !defined(IL2CPP_STRUCT_CookieManager_CookieFetch__Fields_FWDDECL)
#define IL2CPP_STRUCT_CookieManager_CookieFetch__Fields_FWDDECL
#include <Modloader/app/structs/BrowserNative_GetCookieFunc.h>
#include <Modloader/app/structs/CookieManager.h>
#include <Modloader/app/structs/List_1_ZenFulcrum_EmbeddedBrowser_Cookie_.h>
#include <Modloader/app/structs/Promise_1_System_Collections_Generic_List_1_.h>
#endif
#undef IL2CPP_STRUCT_CookieManager_CookieFetch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieManager_CookieFetch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CookieManager_CookieFetch__Fields_FWDDECL)
#include <Modloader/app/structs/CookieManager_CookieFetch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieManager_CookieFetch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
