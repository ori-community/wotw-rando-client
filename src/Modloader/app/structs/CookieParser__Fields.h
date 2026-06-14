#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieParser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieParser__Fields_DEFINED)
#define IL2CPP_STRUCT_CookieParser__Fields_DEFINED
struct CookieTokenizer;
struct Cookie;
struct __declspec(align(8)) CookieParser__Fields {
    struct CookieTokenizer* m_tokenizer;
    struct Cookie* m_savedCookie;
};
#endif
#if !defined(IL2CPP_STRUCT_CookieParser__Fields_FWDDECL)
#define IL2CPP_STRUCT_CookieParser__Fields_FWDDECL
#include <Modloader/app/structs/Cookie.h>
#include <Modloader/app/structs/CookieTokenizer.h>
#endif
#undef IL2CPP_STRUCT_CookieParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieParser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CookieParser__Fields_FWDDECL)
#include <Modloader/app/structs/CookieParser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieParser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
