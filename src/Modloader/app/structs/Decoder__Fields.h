#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Decoder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Decoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Decoder__Fields_DEFINED)
#define IL2CPP_STRUCT_Decoder__Fields_DEFINED
struct DecoderFallback;
struct DecoderFallbackBuffer;
struct __declspec(align(8)) Decoder__Fields {
    struct DecoderFallback* m_fallback;
    struct DecoderFallbackBuffer* m_fallbackBuffer;
};
#endif
#if !defined(IL2CPP_STRUCT_Decoder__Fields_FWDDECL)
#define IL2CPP_STRUCT_Decoder__Fields_FWDDECL
#include <Modloader/app/structs/DecoderFallback.h>
#include <Modloader/app/structs/DecoderFallbackBuffer.h>
#endif
#undef IL2CPP_STRUCT_Decoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Decoder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Decoder__Fields_FWDDECL)
#include <Modloader/app/structs/Decoder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Decoder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
