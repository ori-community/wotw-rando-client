#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdValidatingReader_ValidatingReaderState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdValidatingReader_ValidatingReaderState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdValidatingReader_ValidatingReaderState__Enum_DEFINED)
#define IL2CPP_STRUCT_XsdValidatingReader_ValidatingReaderState__Enum_DEFINED
enum class XsdValidatingReader_ValidatingReaderState__Enum : int32_t {
    None = 0x00000000,
    Init = 0x00000001,
    Read = 0x00000002,
    OnDefaultAttribute = -1,
    OnReadAttributeValue = -2,
    OnAttribute = 0x00000003,
    ClearAttributes = 0x00000004,
    ParseInlineSchema = 0x00000005,
    ReadAhead = 0x00000006,
    OnReadBinaryContent = 0x00000007,
    ReaderClosed = 0x00000008,
    EOF = 0x00000009,
    Error = 0x0000000a,
};
#endif
#if !defined(IL2CPP_STRUCT_XsdValidatingReader_ValidatingReaderState__Enum_FWDDECL)
#define IL2CPP_STRUCT_XsdValidatingReader_ValidatingReaderState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XsdValidatingReader_ValidatingReaderState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdValidatingReader_ValidatingReaderState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XsdValidatingReader_ValidatingReaderState__Enum_FWDDECL)
#include <Modloader/app/structs/XsdValidatingReader_ValidatingReaderState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdValidatingReader_ValidatingReaderState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
