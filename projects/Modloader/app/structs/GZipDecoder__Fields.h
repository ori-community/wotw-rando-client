#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GZipDecoder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GZipDecoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GZipDecoder__Fields_DEFINED)
#include <Modloader/app/structs/GZipDecoder_GzipHeaderState__Enum.h>
#if defined(IL2CPP_STRUCT_GZipDecoder_GzipHeaderState__Enum_DEFINED)
#define IL2CPP_STRUCT_GZipDecoder__Fields_DEFINED
struct __declspec(align(8)) GZipDecoder__Fields {
    GZipDecoder_GzipHeaderState__Enum gzipHeaderSubstate;

    GZipDecoder_GzipHeaderState__Enum gzipFooterSubstate;

    int32_t gzip_header_flag;
    int32_t gzip_header_xlen;
    uint32_t expectedCrc32;
    uint32_t expectedOutputStreamSizeModulo;
    int32_t loopCounter;
    uint32_t actualCrc32;
    int64_t actualStreamSizeModulo;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GZipDecoder__Fields_FWDDECL)
#define IL2CPP_STRUCT_GZipDecoder__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GZipDecoder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GZipDecoder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GZipDecoder__Fields_FWDDECL)
#include <Modloader/app/structs/GZipDecoder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GZipDecoder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
