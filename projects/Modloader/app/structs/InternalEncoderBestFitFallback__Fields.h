#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalEncoderBestFitFallback__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalEncoderBestFitFallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalEncoderBestFitFallback__Fields_DEFINED)
#include <Modloader/app/structs/EncoderFallback__Fields.h>
#if defined(IL2CPP_STRUCT_EncoderFallback__Fields_DEFINED)
#define IL2CPP_STRUCT_InternalEncoderBestFitFallback__Fields_DEFINED
struct Encoding;
struct Char__Array;
struct InternalEncoderBestFitFallback__Fields {
    struct EncoderFallback__Fields _;
    struct Encoding* encoding;
    struct Char__Array* arrayBestFit;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InternalEncoderBestFitFallback__Fields_FWDDECL)
#define IL2CPP_STRUCT_InternalEncoderBestFitFallback__Fields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Encoding.h>
#endif
#undef IL2CPP_STRUCT_InternalEncoderBestFitFallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalEncoderBestFitFallback__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InternalEncoderBestFitFallback__Fields_FWDDECL)
#include <Modloader/app/structs/InternalEncoderBestFitFallback__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalEncoderBestFitFallback__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
