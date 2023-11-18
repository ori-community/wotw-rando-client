#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DateTimeToken_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DateTimeToken_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeToken_DEFINED)
#include <Modloader/app/structs/DateTimeParse_DTT__Enum.h>
#include <Modloader/app/structs/TokenType__Enum.h>
#if defined(IL2CPP_STRUCT_DateTimeParse_DTT__Enum_DEFINED) && defined(IL2CPP_STRUCT_TokenType__Enum_DEFINED)
#define IL2CPP_STRUCT_DateTimeToken_DEFINED
struct DateTimeToken {
    DateTimeParse_DTT__Enum dtt;

    TokenType__Enum suffix;

    int32_t num;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DateTimeToken_FWDDECL)
#define IL2CPP_STRUCT_DateTimeToken_FWDDECL
#endif
#undef IL2CPP_STRUCT_DateTimeToken_INITIALIZING
#if !defined(IL2CPP_STRUCT_DateTimeToken_DEFINED) && !defined(IL2CPP_STRUCT_DateTimeToken_FWDDECL)
#include <Modloader/app/structs/DateTimeToken.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DateTimeToken.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
