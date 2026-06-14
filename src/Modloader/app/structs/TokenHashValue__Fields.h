#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TokenHashValue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TokenHashValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenHashValue__Fields_DEFINED)
#include <Modloader/app/structs/TokenType__Enum.h>
#if defined(IL2CPP_STRUCT_TokenType__Enum_DEFINED)
#define IL2CPP_STRUCT_TokenHashValue__Fields_DEFINED
struct String;
struct __declspec(align(8)) TokenHashValue__Fields {
    struct String* tokenString;
    TokenType__Enum tokenType;

    int32_t tokenValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TokenHashValue__Fields_FWDDECL)
#define IL2CPP_STRUCT_TokenHashValue__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TokenHashValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenHashValue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TokenHashValue__Fields_FWDDECL)
#include <Modloader/app/structs/TokenHashValue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TokenHashValue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
