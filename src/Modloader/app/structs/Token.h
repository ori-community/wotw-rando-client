#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Token_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Token_INITIALIZING
#if !defined(IL2CPP_STRUCT_Token_DEFINED)
#include <Modloader/app/structs/Token_Type__Enum.h>
#if defined(IL2CPP_STRUCT_Token_Type__Enum_DEFINED)
#define IL2CPP_STRUCT_Token_DEFINED
struct Token {
    Token_Type__Enum type;

    int32_t _StartPosition_k__BackingField;
    int32_t _EndPosition_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Token_FWDDECL)
#define IL2CPP_STRUCT_Token_FWDDECL
#endif
#undef IL2CPP_STRUCT_Token_INITIALIZING
#if !defined(IL2CPP_STRUCT_Token_DEFINED) && !defined(IL2CPP_STRUCT_Token_FWDDECL)
#include <Modloader/app/structs/Token.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Token.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
