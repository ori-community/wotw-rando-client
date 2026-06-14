#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieTokenizer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieTokenizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieTokenizer__Fields_DEFINED)
#include <Modloader/app/structs/CookieToken__Enum.h>
#if defined(IL2CPP_STRUCT_CookieToken__Enum_DEFINED)
#define IL2CPP_STRUCT_CookieTokenizer__Fields_DEFINED
struct String;
struct __declspec(align(8)) CookieTokenizer__Fields {
    bool m_eofCookie;
    int32_t m_index;
    int32_t m_length;
    struct String* m_name;
    bool m_quoted;
    int32_t m_start;
    CookieToken__Enum m_token;

    int32_t m_tokenLength;
    struct String* m_tokenStream;
    struct String* m_value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CookieTokenizer__Fields_FWDDECL)
#define IL2CPP_STRUCT_CookieTokenizer__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CookieTokenizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieTokenizer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CookieTokenizer__Fields_FWDDECL)
#include <Modloader/app/structs/CookieTokenizer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieTokenizer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
