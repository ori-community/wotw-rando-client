#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BufferType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BufferType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BufferType__Enum_DEFINED)
#define IL2CPP_STRUCT_BufferType__Enum_DEFINED
enum class BufferType__Enum : int32_t {
    Empty = 0x00000000,
    Data = 0x00000001,
    Token = 0x00000002,
    Parameters = 0x00000003,
    Missing = 0x00000004,
    Extra = 0x00000005,
    Trailer = 0x00000006,
    Header = 0x00000007,
    Padding = 0x00000009,
    Stream = 0x0000000a,
    ChannelBindings = 0x0000000e,
    TargetHost = 0x00000010,
    ReadOnlyFlag = -2147483648,
    ReadOnlyWithChecksum = 0x10000000,
};
#endif
#if !defined(IL2CPP_STRUCT_BufferType__Enum_FWDDECL)
#define IL2CPP_STRUCT_BufferType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BufferType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BufferType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BufferType__Enum_FWDDECL)
#include <Modloader/app/structs/BufferType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BufferType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
