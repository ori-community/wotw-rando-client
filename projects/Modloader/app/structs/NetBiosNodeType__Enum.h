#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NetBiosNodeType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NetBiosNodeType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetBiosNodeType__Enum_DEFINED)
#define IL2CPP_STRUCT_NetBiosNodeType__Enum_DEFINED
enum class NetBiosNodeType__Enum : int32_t {
    Unknown = 0x00000000,
    Broadcast = 0x00000001,
    Peer2Peer = 0x00000002,
    Mixed = 0x00000004,
    Hybrid = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_NetBiosNodeType__Enum_FWDDECL)
#define IL2CPP_STRUCT_NetBiosNodeType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_NetBiosNodeType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NetBiosNodeType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_NetBiosNodeType__Enum_FWDDECL)
#include <Modloader/app/structs/NetBiosNodeType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NetBiosNodeType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
