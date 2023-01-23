#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EncoderReplacementFallback__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EncoderReplacementFallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncoderReplacementFallback__Fields_DEFINED)
#include <Modloader/app/structs/EncoderFallback__Fields.h>
#if defined(IL2CPP_STRUCT_EncoderFallback__Fields_DEFINED)
#define IL2CPP_STRUCT_EncoderReplacementFallback__Fields_DEFINED
struct String;
struct EncoderReplacementFallback__Fields {
    struct EncoderFallback__Fields _;
    struct String* strDefault;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EncoderReplacementFallback__Fields_FWDDECL)
#define IL2CPP_STRUCT_EncoderReplacementFallback__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EncoderReplacementFallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncoderReplacementFallback__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EncoderReplacementFallback__Fields_FWDDECL)
#include <Modloader/app/structs/EncoderReplacementFallback__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EncoderReplacementFallback__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
