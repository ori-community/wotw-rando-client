#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tokenizer_StreamTokenReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tokenizer_StreamTokenReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tokenizer_StreamTokenReader__Fields_DEFINED)
#define IL2CPP_STRUCT_Tokenizer_StreamTokenReader__Fields_DEFINED
struct StreamReader;
struct __declspec(align(8)) Tokenizer_StreamTokenReader__Fields {
    struct StreamReader* _in;
    int32_t _numCharRead;
};
#endif
#if !defined(IL2CPP_STRUCT_Tokenizer_StreamTokenReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_Tokenizer_StreamTokenReader__Fields_FWDDECL
#include <Modloader/app/structs/StreamReader.h>
#endif
#undef IL2CPP_STRUCT_Tokenizer_StreamTokenReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tokenizer_StreamTokenReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Tokenizer_StreamTokenReader__Fields_FWDDECL)
#include <Modloader/app/structs/Tokenizer_StreamTokenReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tokenizer_StreamTokenReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
