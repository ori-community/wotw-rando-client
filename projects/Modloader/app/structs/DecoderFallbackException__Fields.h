#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecoderFallbackException__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecoderFallbackException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderFallbackException__Fields_DEFINED)
#include <Modloader/app/structs/ArgumentException__Fields.h>
#if defined(IL2CPP_STRUCT_ArgumentException__Fields_DEFINED)
#define IL2CPP_STRUCT_DecoderFallbackException__Fields_DEFINED
struct Byte__Array;
struct DecoderFallbackException__Fields {
    struct ArgumentException__Fields _;
    struct Byte__Array* bytesUnknown;
    int32_t index;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DecoderFallbackException__Fields_FWDDECL)
#define IL2CPP_STRUCT_DecoderFallbackException__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_DecoderFallbackException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderFallbackException__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DecoderFallbackException__Fields_FWDDECL)
#include <Modloader/app/structs/DecoderFallbackException__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecoderFallbackException__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
