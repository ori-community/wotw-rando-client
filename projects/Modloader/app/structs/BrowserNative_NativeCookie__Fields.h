#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserNative_NativeCookie__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserNative_NativeCookie__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_NativeCookie__Fields_DEFINED)
#define IL2CPP_STRUCT_BrowserNative_NativeCookie__Fields_DEFINED
struct String;
struct __declspec(align(8)) BrowserNative_NativeCookie__Fields {
    struct String* name;
    struct String* value;
    struct String* domain;
    struct String* path;
    struct String* creation;
    struct String* lastAccess;
    struct String* expires;
    uint8_t secure;
    uint8_t httpOnly;
};
#endif
#if !defined(IL2CPP_STRUCT_BrowserNative_NativeCookie__Fields_FWDDECL)
#define IL2CPP_STRUCT_BrowserNative_NativeCookie__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_BrowserNative_NativeCookie__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNative_NativeCookie__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BrowserNative_NativeCookie__Fields_FWDDECL)
#include <Modloader/app/structs/BrowserNative_NativeCookie__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserNative_NativeCookie__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
