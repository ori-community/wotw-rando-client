#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Cookie_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Cookie_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cookie_1__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_Cookie_1__Fields_DEFINED
struct CookieManager;
struct BrowserNative_NativeCookie;
struct String;
struct __declspec(align(8)) Cookie_1__Fields {
    struct CookieManager* cookies;
    struct BrowserNative_NativeCookie* original;
    struct String* name;
    struct String* value;
    struct String* domain;
    struct String* path;
    struct DateTime creation;
    struct DateTime lastAccess;
    struct Nullable_1_DateTime_ expires;
    bool secure;
    bool httpOnly;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Cookie_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Cookie_1__Fields_FWDDECL
#include <Modloader/app/structs/BrowserNative_NativeCookie.h>
#include <Modloader/app/structs/CookieManager.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Cookie_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Cookie_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Cookie_1__Fields_FWDDECL)
#include <Modloader/app/structs/Cookie_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Cookie_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
