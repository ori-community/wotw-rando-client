#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharEntityEncoderFallback__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharEntityEncoderFallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharEntityEncoderFallback__Fields_DEFINED)
#include <Modloader/app/structs/EncoderFallback__Fields.h>
#if defined(IL2CPP_STRUCT_EncoderFallback__Fields_DEFINED)
#define IL2CPP_STRUCT_CharEntityEncoderFallback__Fields_DEFINED
struct CharEntityEncoderFallbackBuffer;
struct Int32__Array;
struct CharEntityEncoderFallback__Fields {
    struct EncoderFallback__Fields _;
    struct CharEntityEncoderFallbackBuffer* fallbackBuffer;
    struct Int32__Array* textContentMarks;
    int32_t endMarkPos;
    int32_t curMarkPos;
    int32_t startOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharEntityEncoderFallback__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharEntityEncoderFallback__Fields_FWDDECL
#include <Modloader/app/structs/CharEntityEncoderFallbackBuffer.h>
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_CharEntityEncoderFallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharEntityEncoderFallback__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharEntityEncoderFallback__Fields_FWDDECL)
#include <Modloader/app/structs/CharEntityEncoderFallback__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharEntityEncoderFallback__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
