#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tokenizer_TokenSource__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tokenizer_TokenSource__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tokenizer_TokenSource__Enum_DEFINED)
#define IL2CPP_STRUCT_Tokenizer_TokenSource__Enum_DEFINED
enum class Tokenizer_TokenSource__Enum : int32_t {
    UnicodeByteArray = 0x00000000,
    UTF8ByteArray = 0x00000001,
    ASCIIByteArray = 0x00000002,
    CharArray = 0x00000003,
    String = 0x00000004,
    NestedStrings = 0x00000005,
    Other = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_Tokenizer_TokenSource__Enum_FWDDECL)
#define IL2CPP_STRUCT_Tokenizer_TokenSource__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Tokenizer_TokenSource__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tokenizer_TokenSource__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Tokenizer_TokenSource__Enum_FWDDECL)
#include <Modloader/app/structs/Tokenizer_TokenSource__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tokenizer_TokenSource__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
