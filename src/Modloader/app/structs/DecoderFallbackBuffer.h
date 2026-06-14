#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecoderFallbackBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecoderFallbackBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderFallbackBuffer_DEFINED)
#include <Modloader/app/structs/DecoderFallbackBuffer__Fields.h>
#if defined(IL2CPP_STRUCT_DecoderFallbackBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_DecoderFallbackBuffer_DEFINED
struct DecoderFallbackBuffer__Class;
struct DecoderFallbackBuffer {
    struct DecoderFallbackBuffer__Class* klass;
    MonitorData* monitor;
    struct DecoderFallbackBuffer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DecoderFallbackBuffer_FWDDECL)
#define IL2CPP_STRUCT_DecoderFallbackBuffer_FWDDECL
#include <Modloader/app/structs/DecoderFallbackBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_DecoderFallbackBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderFallbackBuffer_DEFINED) && !defined(IL2CPP_STRUCT_DecoderFallbackBuffer_FWDDECL)
#include <Modloader/app/structs/DecoderFallbackBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecoderFallbackBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
