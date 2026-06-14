#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tokenizer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tokenizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tokenizer__Fields_DEFINED)
#include <Modloader/app/structs/Tokenizer_TokenSource__Enum.h>
#if defined(IL2CPP_STRUCT_Tokenizer_TokenSource__Enum_DEFINED)
#define IL2CPP_STRUCT_Tokenizer__Fields_DEFINED
struct Byte__Array;
struct Char__Array;
struct String;
struct Tokenizer_ITokenReader;
struct Tokenizer_StringMaker;
struct String__Array;
struct __declspec(align(8)) Tokenizer__Fields {
    int32_t LineNo;
    int32_t _inProcessingTag;
    struct Byte__Array* _inBytes;
    struct Char__Array* _inChars;
    struct String* _inString;
    int32_t _inIndex;
    int32_t _inSize;
    int32_t _inSavedCharacter;
    Tokenizer_TokenSource__Enum _inTokenSource;

    struct Tokenizer_ITokenReader* _inTokenReader;
    struct Tokenizer_StringMaker* _maker;
    struct String__Array* _searchStrings;
    struct String__Array* _replaceStrings;
    int32_t _inNestedIndex;
    int32_t _inNestedSize;
    struct String* _inNestedString;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Tokenizer__Fields_FWDDECL)
#define IL2CPP_STRUCT_Tokenizer__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Tokenizer_ITokenReader.h>
#include <Modloader/app/structs/Tokenizer_StringMaker.h>
#endif
#undef IL2CPP_STRUCT_Tokenizer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tokenizer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Tokenizer__Fields_FWDDECL)
#include <Modloader/app/structs/Tokenizer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tokenizer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
