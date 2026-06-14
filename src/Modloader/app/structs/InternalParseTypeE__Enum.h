#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalParseTypeE__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalParseTypeE__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalParseTypeE__Enum_DEFINED)
#define IL2CPP_STRUCT_InternalParseTypeE__Enum_DEFINED
enum class InternalParseTypeE__Enum : int32_t {
    Empty = 0x00000000,
    SerializedStreamHeader = 0x00000001,
    Object = 0x00000002,
    Member = 0x00000003,
    ObjectEnd = 0x00000004,
    MemberEnd = 0x00000005,
    Headers = 0x00000006,
    HeadersEnd = 0x00000007,
    SerializedStreamHeaderEnd = 0x00000008,
    Envelope = 0x00000009,
    EnvelopeEnd = 0x0000000a,
    Body = 0x0000000b,
    BodyEnd = 0x0000000c,
};
#endif
#if !defined(IL2CPP_STRUCT_InternalParseTypeE__Enum_FWDDECL)
#define IL2CPP_STRUCT_InternalParseTypeE__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_InternalParseTypeE__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalParseTypeE__Enum_DEFINED) && !defined(IL2CPP_STRUCT_InternalParseTypeE__Enum_FWDDECL)
#include <Modloader/app/structs/InternalParseTypeE__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalParseTypeE__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
