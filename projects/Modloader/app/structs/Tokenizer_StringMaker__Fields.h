#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tokenizer_StringMaker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tokenizer_StringMaker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tokenizer_StringMaker__Fields_DEFINED)
#define IL2CPP_STRUCT_Tokenizer_StringMaker__Fields_DEFINED
struct String__Array;
struct StringBuilder;
struct Char__Array;
struct __declspec(align(8)) Tokenizer_StringMaker__Fields {
    struct String__Array* aStrings;
    uint32_t cStringsMax;
    uint32_t cStringsUsed;
    struct StringBuilder* _outStringBuilder;
    struct Char__Array* _outChars;
    int32_t _outIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_Tokenizer_StringMaker__Fields_FWDDECL)
#define IL2CPP_STRUCT_Tokenizer_StringMaker__Fields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_Tokenizer_StringMaker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tokenizer_StringMaker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Tokenizer_StringMaker__Fields_FWDDECL)
#include <Modloader/app/structs/Tokenizer_StringMaker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tokenizer_StringMaker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
