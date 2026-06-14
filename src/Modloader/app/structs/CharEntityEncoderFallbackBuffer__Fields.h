#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharEntityEncoderFallbackBuffer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharEntityEncoderFallbackBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharEntityEncoderFallbackBuffer__Fields_DEFINED)
#include <Modloader/app/structs/EncoderFallbackBuffer__Fields.h>
#if defined(IL2CPP_STRUCT_EncoderFallbackBuffer__Fields_DEFINED)
#define IL2CPP_STRUCT_CharEntityEncoderFallbackBuffer__Fields_DEFINED
struct CharEntityEncoderFallback;
struct String;
struct CharEntityEncoderFallbackBuffer__Fields {
    struct EncoderFallbackBuffer__Fields _;
    struct CharEntityEncoderFallback* parent;
    struct String* charEntity;
    int32_t charEntityIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharEntityEncoderFallbackBuffer__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharEntityEncoderFallbackBuffer__Fields_FWDDECL
#include <Modloader/app/structs/CharEntityEncoderFallback.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CharEntityEncoderFallbackBuffer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharEntityEncoderFallbackBuffer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharEntityEncoderFallbackBuffer__Fields_FWDDECL)
#include <Modloader/app/structs/CharEntityEncoderFallbackBuffer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharEntityEncoderFallbackBuffer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
