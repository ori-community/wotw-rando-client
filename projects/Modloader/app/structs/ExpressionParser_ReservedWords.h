#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpressionParser_ReservedWords_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpressionParser_ReservedWords_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpressionParser_ReservedWords_DEFINED)
#include <Modloader/app/structs/Tokens__Enum.h>
#if defined(IL2CPP_STRUCT_Tokens__Enum_DEFINED)
#define IL2CPP_STRUCT_ExpressionParser_ReservedWords_DEFINED
struct String;
struct ExpressionParser_ReservedWords {
    struct String* _word;
    Tokens__Enum _token;

    int32_t _op;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExpressionParser_ReservedWords_FWDDECL)
#define IL2CPP_STRUCT_ExpressionParser_ReservedWords_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ExpressionParser_ReservedWords_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpressionParser_ReservedWords_DEFINED) && !defined(IL2CPP_STRUCT_ExpressionParser_ReservedWords_FWDDECL)
#include <Modloader/app/structs/ExpressionParser_ReservedWords.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpressionParser_ReservedWords.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
