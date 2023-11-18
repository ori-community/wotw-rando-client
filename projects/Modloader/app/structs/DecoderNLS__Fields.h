#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecoderNLS__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecoderNLS__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderNLS__Fields_DEFINED)
#include <Modloader/app/structs/Decoder__Fields.h>
#if defined(IL2CPP_STRUCT_Decoder__Fields_DEFINED)
#define IL2CPP_STRUCT_DecoderNLS__Fields_DEFINED
struct Encoding;
struct DecoderNLS__Fields {
    struct Decoder__Fields _;
    struct Encoding* m_encoding;
    bool m_mustFlush;
    bool m_throwOnOverflow;
    int32_t m_bytesUsed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DecoderNLS__Fields_FWDDECL)
#define IL2CPP_STRUCT_DecoderNLS__Fields_FWDDECL
#include <Modloader/app/structs/Encoding.h>
#endif
#undef IL2CPP_STRUCT_DecoderNLS__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoderNLS__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DecoderNLS__Fields_FWDDECL)
#include <Modloader/app/structs/DecoderNLS__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecoderNLS__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
