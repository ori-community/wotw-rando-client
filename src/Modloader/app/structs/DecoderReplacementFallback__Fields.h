#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecoderReplacementFallback__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecoderReplacementFallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderReplacementFallback__Fields_DEFINED)
#include <Modloader/app/structs/DecoderFallback__Fields.h>
#if defined(IL2CPP_STRUCT_DecoderFallback__Fields_DEFINED)
#define IL2CPP_STRUCT_DecoderReplacementFallback__Fields_DEFINED
struct String;
struct DecoderReplacementFallback__Fields {
    struct DecoderFallback__Fields _;
    struct String* strDefault;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DecoderReplacementFallback__Fields_FWDDECL)
#define IL2CPP_STRUCT_DecoderReplacementFallback__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DecoderReplacementFallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderReplacementFallback__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DecoderReplacementFallback__Fields_FWDDECL)
#include <Modloader/app/structs/DecoderReplacementFallback__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecoderReplacementFallback__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
