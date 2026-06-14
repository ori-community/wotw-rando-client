#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Lexer__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Lexer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lexer__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Lexer__StaticFields_DEFINED
struct Boolean__Array;
struct String__Array;
struct Lexer__StaticFields {
    struct Boolean__Array* token_chars;
    int32_t last_token_char;
    struct String__Array* dt_formats;
};
#endif
#if !defined(IL2CPP_STRUCT_Lexer__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Lexer__StaticFields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_Lexer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lexer__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Lexer__StaticFields_FWDDECL)
#include <Modloader/app/structs/Lexer__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Lexer__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
