#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdCachingReader_CachingReaderState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdCachingReader_CachingReaderState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdCachingReader_CachingReaderState__Enum_DEFINED)
#define IL2CPP_STRUCT_XsdCachingReader_CachingReaderState__Enum_DEFINED
enum class XsdCachingReader_CachingReaderState__Enum : int32_t {
    None = 0x00000000,
    Init = 0x00000001,
    Record = 0x00000002,
    Replay = 0x00000003,
    ReaderClosed = 0x00000004,
    Error = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_XsdCachingReader_CachingReaderState__Enum_FWDDECL)
#define IL2CPP_STRUCT_XsdCachingReader_CachingReaderState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XsdCachingReader_CachingReaderState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdCachingReader_CachingReaderState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XsdCachingReader_CachingReaderState__Enum_FWDDECL)
#include <Modloader/app/structs/XsdCachingReader_CachingReaderState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdCachingReader_CachingReaderState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
