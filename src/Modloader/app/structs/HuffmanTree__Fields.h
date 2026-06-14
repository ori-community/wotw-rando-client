#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HuffmanTree__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HuffmanTree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HuffmanTree__Fields_DEFINED)
#define IL2CPP_STRUCT_HuffmanTree__Fields_DEFINED
struct Int16__Array;
struct Byte__Array;
struct __declspec(align(8)) HuffmanTree__Fields {
    int32_t tableBits;
    struct Int16__Array* table;
    struct Int16__Array* left;
    struct Int16__Array* right;
    struct Byte__Array* codeLengthArray;
    int32_t tableMask;
};
#endif
#if !defined(IL2CPP_STRUCT_HuffmanTree__Fields_FWDDECL)
#define IL2CPP_STRUCT_HuffmanTree__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Int16__Array.h>
#endif
#undef IL2CPP_STRUCT_HuffmanTree__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HuffmanTree__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HuffmanTree__Fields_FWDDECL)
#include <Modloader/app/structs/HuffmanTree__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HuffmanTree__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
