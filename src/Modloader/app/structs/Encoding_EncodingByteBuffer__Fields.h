#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Encoding_EncodingByteBuffer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Encoding_EncodingByteBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoding_EncodingByteBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_Encoding_EncodingByteBuffer__Fields_DEFINED
struct Encoding;
struct EncoderNLS;
struct EncoderFallbackBuffer;
struct __declspec(align(8)) Encoding_EncodingByteBuffer__Fields {
    uint8_t* bytes;
    uint8_t* byteStart;
    uint8_t* byteEnd;
    uint16_t* chars;
    uint16_t* charStart;
    uint16_t* charEnd;
    int32_t byteCountResult;
    struct Encoding* enc;
    struct EncoderNLS* encoder;
    struct EncoderFallbackBuffer* fallbackBuffer;
};
#endif
#if !defined(IL2CPP_STRUCT_Encoding_EncodingByteBuffer__Fields_FWDDECL)
#define IL2CPP_STRUCT_Encoding_EncodingByteBuffer__Fields_FWDDECL
#include <Modloader/app/structs/EncoderFallbackBuffer.h>
#include <Modloader/app/structs/EncoderNLS.h>
#include <Modloader/app/structs/Encoding.h>
#endif
#undef IL2CPP_STRUCT_Encoding_EncodingByteBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoding_EncodingByteBuffer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Encoding_EncodingByteBuffer__Fields_FWDDECL)
#include <Modloader/app/structs/Encoding_EncodingByteBuffer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Encoding_EncodingByteBuffer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
