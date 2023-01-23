#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalDecoderBestFitFallbackBuffer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalDecoderBestFitFallbackBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalDecoderBestFitFallbackBuffer__Fields_DEFINED)
#include <Modloader/app/structs/DecoderFallbackBuffer__Fields.h>
#if defined(IL2CPP_STRUCT_DecoderFallbackBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_InternalDecoderBestFitFallbackBuffer__Fields_DEFINED
struct InternalDecoderBestFitFallback;
struct InternalDecoderBestFitFallbackBuffer__Fields {
    struct DecoderFallbackBuffer__Fields _;
    uint16_t cBestFit;
    int32_t iCount;
    int32_t iSize;
    struct InternalDecoderBestFitFallback* oFallback;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InternalDecoderBestFitFallbackBuffer__Fields_FWDDECL)
#define IL2CPP_STRUCT_InternalDecoderBestFitFallbackBuffer__Fields_FWDDECL
#include <Modloader/app/structs/InternalDecoderBestFitFallback.h>
#endif
#undef IL2CPP_STRUCT_InternalDecoderBestFitFallbackBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalDecoderBestFitFallbackBuffer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InternalDecoderBestFitFallbackBuffer__Fields_FWDDECL)
#include <Modloader/app/structs/InternalDecoderBestFitFallbackBuffer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalDecoderBestFitFallbackBuffer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
