#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieTokenizer_RecognizedAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieTokenizer_RecognizedAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieTokenizer_RecognizedAttribute_DEFINED)
#include <Modloader/app/structs/CookieToken__Enum.h>
#if defined(IL2CPP_STRUCT_CookieToken__Enum_DEFINED)
#define IL2CPP_STRUCT_CookieTokenizer_RecognizedAttribute_DEFINED
struct String;
struct CookieTokenizer_RecognizedAttribute {
    struct String* m_name;
    CookieToken__Enum m_token;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CookieTokenizer_RecognizedAttribute_FWDDECL)
#define IL2CPP_STRUCT_CookieTokenizer_RecognizedAttribute_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CookieTokenizer_RecognizedAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieTokenizer_RecognizedAttribute_DEFINED) && !defined(IL2CPP_STRUCT_CookieTokenizer_RecognizedAttribute_FWDDECL)
#include <Modloader/app/structs/CookieTokenizer_RecognizedAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieTokenizer_RecognizedAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
