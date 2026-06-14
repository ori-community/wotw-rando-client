#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SocketFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SocketFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_SocketFlags__Enum_DEFINED
enum class SocketFlags__Enum : int32_t {
    None = 0x00000000,
    OutOfBand = 0x00000001,
    Peek = 0x00000002,
    DontRoute = 0x00000004,
    MaxIOVectorLength = 0x00000010,
    Truncated = 0x00000100,
    ControlDataTruncated = 0x00000200,
    Broadcast = 0x00000400,
    Multicast = 0x00000800,
    Partial = 0x00008000,
};
#endif
#if !defined(IL2CPP_STRUCT_SocketFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_SocketFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SocketFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SocketFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SocketFlags__Enum_FWDDECL)
#include <Modloader/app/structs/SocketFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SocketFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
