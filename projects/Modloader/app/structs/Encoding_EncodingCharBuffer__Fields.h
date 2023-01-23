#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Encoding_EncodingCharBuffer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Encoding_EncodingCharBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoding_EncodingCharBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_Encoding_EncodingCharBuffer__Fields_DEFINED
struct Encoding;
struct DecoderNLS;
struct DecoderFallbackBuffer;
struct __declspec(align(8)) Encoding_EncodingCharBuffer__Fields {
    uint16_t* chars;
    uint16_t* charStart;
    uint16_t* charEnd;
    int32_t charCountResult;
    struct Encoding* enc;
    struct DecoderNLS* decoder;
    uint8_t* byteStart;
    uint8_t* byteEnd;
    uint8_t* bytes;
    struct DecoderFallbackBuffer* fallbackBuffer;
};
#endif
#if !defined(IL2CPP_STRUCT_Encoding_EncodingCharBuffer__Fields_FWDDECL)
#define IL2CPP_STRUCT_Encoding_EncodingCharBuffer__Fields_FWDDECL
#include <Modloader/app/structs/DecoderFallbackBuffer.h>
#include <Modloader/app/structs/DecoderNLS.h>
#include <Modloader/app/structs/Encoding.h>
#endif
#undef IL2CPP_STRUCT_Encoding_EncodingCharBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoding_EncodingCharBuffer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Encoding_EncodingCharBuffer__Fields_FWDDECL)
#include <Modloader/app/structs/Encoding_EncodingCharBuffer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Encoding_EncodingCharBuffer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
