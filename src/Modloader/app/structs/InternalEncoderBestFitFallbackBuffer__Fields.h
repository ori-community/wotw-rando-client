#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalEncoderBestFitFallbackBuffer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalEncoderBestFitFallbackBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalEncoderBestFitFallbackBuffer__Fields_DEFINED)
#include <Modloader/app/structs/EncoderFallbackBuffer__Fields.h>
#if defined(IL2CPP_STRUCT_EncoderFallbackBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_InternalEncoderBestFitFallbackBuffer__Fields_DEFINED
struct InternalEncoderBestFitFallback;
struct InternalEncoderBestFitFallbackBuffer__Fields {
    struct EncoderFallbackBuffer__Fields _;
    uint16_t cBestFit;
    struct InternalEncoderBestFitFallback* oFallback;
    int32_t iCount;
    int32_t iSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InternalEncoderBestFitFallbackBuffer__Fields_FWDDECL)
#define IL2CPP_STRUCT_InternalEncoderBestFitFallbackBuffer__Fields_FWDDECL
#include <Modloader/app/structs/InternalEncoderBestFitFallback.h>
#endif
#undef IL2CPP_STRUCT_InternalEncoderBestFitFallbackBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalEncoderBestFitFallbackBuffer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InternalEncoderBestFitFallbackBuffer__Fields_FWDDECL)
#include <Modloader/app/structs/InternalEncoderBestFitFallbackBuffer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalEncoderBestFitFallbackBuffer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
