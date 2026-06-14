#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecoderExceptionFallbackBuffer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecoderExceptionFallbackBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderExceptionFallbackBuffer_DEFINED)
#include <Modloader/app/structs/DecoderExceptionFallbackBuffer__Fields.h>
#if defined(IL2CPP_STRUCT_DecoderExceptionFallbackBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_DecoderExceptionFallbackBuffer_DEFINED
struct DecoderExceptionFallbackBuffer__Class;
struct DecoderExceptionFallbackBuffer {
    struct DecoderExceptionFallbackBuffer__Class* klass;
    MonitorData* monitor;
    struct DecoderExceptionFallbackBuffer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DecoderExceptionFallbackBuffer_FWDDECL)
#define IL2CPP_STRUCT_DecoderExceptionFallbackBuffer_FWDDECL
#include <Modloader/app/structs/DecoderExceptionFallbackBuffer__Class.h>
#endif
#undef IL2CPP_STRUCT_DecoderExceptionFallbackBuffer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderExceptionFallbackBuffer_DEFINED) && !defined(IL2CPP_STRUCT_DecoderExceptionFallbackBuffer_FWDDECL)
#include <Modloader/app/structs/DecoderExceptionFallbackBuffer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecoderExceptionFallbackBuffer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
