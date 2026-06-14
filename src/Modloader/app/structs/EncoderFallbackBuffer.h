#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EncoderFallbackBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EncoderFallbackBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncoderFallbackBuffer_DEFINED)
#include <Modloader/app/structs/EncoderFallbackBuffer__Fields.h>
#if defined(IL2CPP_STRUCT_EncoderFallbackBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_EncoderFallbackBuffer_DEFINED
struct EncoderFallbackBuffer__Class;
struct EncoderFallbackBuffer {
    struct EncoderFallbackBuffer__Class* klass;
    MonitorData* monitor;
    struct EncoderFallbackBuffer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EncoderFallbackBuffer_FWDDECL)
#define IL2CPP_STRUCT_EncoderFallbackBuffer_FWDDECL
#include <Modloader/app/structs/EncoderFallbackBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_EncoderFallbackBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncoderFallbackBuffer_DEFINED) && !defined(IL2CPP_STRUCT_EncoderFallbackBuffer_FWDDECL)
#include <Modloader/app/structs/EncoderFallbackBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EncoderFallbackBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
