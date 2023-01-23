#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Base64Encoder_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Base64Encoder_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Base64Encoder_1__Fields_DEFINED)
#define IL2CPP_STRUCT_Base64Encoder_1__Fields_DEFINED
struct Char__Array;
struct TextWriter;
struct Byte__Array;
struct __declspec(align(8)) Base64Encoder_1__Fields {
    struct Char__Array* _charsLine;
    struct TextWriter* _writer;
    struct Byte__Array* _leftOverBytes;
    int32_t _leftOverBytesCount;
};
#endif
#if !defined(IL2CPP_STRUCT_Base64Encoder_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Base64Encoder_1__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/TextWriter.h>
#endif
#undef IL2CPP_STRUCT_Base64Encoder_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Base64Encoder_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Base64Encoder_1__Fields_FWDDECL)
#include <Modloader/app/structs/Base64Encoder_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Base64Encoder_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
