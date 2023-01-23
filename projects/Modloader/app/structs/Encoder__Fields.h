#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Encoder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Encoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoder__Fields_DEFINED)
#define IL2CPP_STRUCT_Encoder__Fields_DEFINED
struct EncoderFallback;
struct EncoderFallbackBuffer;
struct __declspec(align(8)) Encoder__Fields {
    struct EncoderFallback* m_fallback;
    struct EncoderFallbackBuffer* m_fallbackBuffer;
};
#endif
#if !defined(IL2CPP_STRUCT_Encoder__Fields_FWDDECL)
#define IL2CPP_STRUCT_Encoder__Fields_FWDDECL
#include <Modloader/app/structs/EncoderFallback.h>
#include <Modloader/app/structs/EncoderFallbackBuffer.h>
#endif
#undef IL2CPP_STRUCT_Encoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Encoder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Encoder__Fields_FWDDECL)
#include <Modloader/app/structs/Encoder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Encoder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
