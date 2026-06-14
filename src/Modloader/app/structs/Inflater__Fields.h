#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Inflater__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Inflater__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Inflater__Fields_DEFINED)
#include <Modloader/app/structs/BlockType__Enum.h>
#include <Modloader/app/structs/InflaterState__Enum.h>
#if defined(IL2CPP_STRUCT_InflaterState__Enum_DEFINED) && defined(IL2CPP_STRUCT_BlockType__Enum_DEFINED)
#define IL2CPP_STRUCT_Inflater__Fields_DEFINED
struct OutputWindow;
struct InputBuffer;
struct HuffmanTree;
struct Byte__Array;
struct IFileFormatReader;
struct __declspec(align(8)) Inflater__Fields {
    struct OutputWindow* output;
    struct InputBuffer* input;
    struct HuffmanTree* literalLengthTree;
    struct HuffmanTree* distanceTree;
    InflaterState__Enum state;

    bool hasFormatReader;
    int32_t bfinal;
    BlockType__Enum blockType;

    struct Byte__Array* blockLengthBuffer;
    int32_t blockLength;
    int32_t length;
    int32_t distanceCode;
    int32_t extraBits;
    int32_t loopCounter;
    int32_t literalLengthCodeCount;
    int32_t distanceCodeCount;
    int32_t codeLengthCodeCount;
    int32_t codeArraySize;
    int32_t lengthCode;
    struct Byte__Array* codeList;
    struct Byte__Array* codeLengthTreeCodeLength;
    struct HuffmanTree* codeLengthTree;
    struct IFileFormatReader* formatReader;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Inflater__Fields_FWDDECL)
#define IL2CPP_STRUCT_Inflater__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HuffmanTree.h>
#include <Modloader/app/structs/IFileFormatReader.h>
#include <Modloader/app/structs/InputBuffer.h>
#include <Modloader/app/structs/OutputWindow.h>
#endif
#undef IL2CPP_STRUCT_Inflater__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Inflater__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Inflater__Fields_FWDDECL)
#include <Modloader/app/structs/Inflater__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Inflater__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
