#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Lexer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Lexer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lexer_DEFINED)
#include <Modloader/app/structs/Lexer__Fields.h>
#if defined(IL2CPP_STRUCT_Lexer__Fields_DEFINED)
#define IL2CPP_STRUCT_Lexer_DEFINED
struct Lexer__Class;
struct Lexer {
    struct Lexer__Class* klass;
    MonitorData* monitor;
    struct Lexer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Lexer_FWDDECL)
#define IL2CPP_STRUCT_Lexer_FWDDECL
#include <Modloader/app/structs/Lexer__Class.h>
#endif
#undef IL2CPP_STRUCT_Lexer_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lexer_DEFINED) && !defined(IL2CPP_STRUCT_Lexer_FWDDECL)
#include <Modloader/app/structs/Lexer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Lexer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
