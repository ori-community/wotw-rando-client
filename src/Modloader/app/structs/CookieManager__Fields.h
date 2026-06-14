#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieManager__Fields_DEFINED)
#define IL2CPP_STRUCT_CookieManager__Fields_DEFINED
struct Browser;
struct __declspec(align(8)) CookieManager__Fields {
    struct Browser* browser;
};
#endif
#if !defined(IL2CPP_STRUCT_CookieManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_CookieManager__Fields_FWDDECL
#include <Modloader/app/structs/Browser.h>
#endif
#undef IL2CPP_STRUCT_CookieManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CookieManager__Fields_FWDDECL)
#include <Modloader/app/structs/CookieManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
