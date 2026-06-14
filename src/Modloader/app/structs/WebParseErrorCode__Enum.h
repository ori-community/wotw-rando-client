#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebParseErrorCode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebParseErrorCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebParseErrorCode__Enum_DEFINED)
#define IL2CPP_STRUCT_WebParseErrorCode__Enum_DEFINED
enum class WebParseErrorCode__Enum : int32_t {
    Generic = 0x00000000,
    InvalidHeaderName = 0x00000001,
    InvalidContentLength = 0x00000002,
    IncompleteHeaderLine = 0x00000003,
    CrLfError = 0x00000004,
    InvalidChunkFormat = 0x00000005,
    UnexpectedServerResponse = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_WebParseErrorCode__Enum_FWDDECL)
#define IL2CPP_STRUCT_WebParseErrorCode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_WebParseErrorCode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebParseErrorCode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_WebParseErrorCode__Enum_FWDDECL)
#include <Modloader/app/structs/WebParseErrorCode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebParseErrorCode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
