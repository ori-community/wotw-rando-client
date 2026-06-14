#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EncoderFallbackBuffer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EncoderFallbackBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncoderFallbackBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_EncoderFallbackBuffer__Fields_DEFINED
struct EncoderNLS;
struct __declspec(align(8)) EncoderFallbackBuffer__Fields {
    uint16_t* charStart;
    uint16_t* charEnd;
    struct EncoderNLS* encoder;
    bool setEncoder;
    bool bUsedEncoder;
    bool bFallingBack;
    int32_t iRecursionCount;
};
#endif
#if !defined(IL2CPP_STRUCT_EncoderFallbackBuffer__Fields_FWDDECL)
#define IL2CPP_STRUCT_EncoderFallbackBuffer__Fields_FWDDECL
#include <Modloader/app/structs/EncoderNLS.h>
#endif
#undef IL2CPP_STRUCT_EncoderFallbackBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncoderFallbackBuffer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EncoderFallbackBuffer__Fields_FWDDECL)
#include <Modloader/app/structs/EncoderFallbackBuffer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EncoderFallbackBuffer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
