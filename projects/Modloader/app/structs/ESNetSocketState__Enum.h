#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ESNetSocketState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ESNetSocketState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ESNetSocketState__Enum_DEFINED)
#define IL2CPP_STRUCT_ESNetSocketState__Enum_DEFINED
enum class ESNetSocketState__Enum : int32_t {
    k_ESNetSocketStateInvalid = 0x00000000,
    k_ESNetSocketStateConnected = 0x00000001,
    k_ESNetSocketStateInitiated = 0x0000000a,
    k_ESNetSocketStateLocalCandidatesFound = 0x0000000b,
    k_ESNetSocketStateReceivedRemoteCandidates = 0x0000000c,
    k_ESNetSocketStateChallengeHandshake = 0x0000000f,
    k_ESNetSocketStateDisconnecting = 0x00000015,
    k_ESNetSocketStateLocalDisconnect = 0x00000016,
    k_ESNetSocketStateTimeoutDuringConnect = 0x00000017,
    k_ESNetSocketStateRemoteEndDisconnected = 0x00000018,
    k_ESNetSocketStateConnectionBroken = 0x00000019,
};
#endif
#if !defined(IL2CPP_STRUCT_ESNetSocketState__Enum_FWDDECL)
#define IL2CPP_STRUCT_ESNetSocketState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ESNetSocketState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ESNetSocketState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ESNetSocketState__Enum_FWDDECL)
#include <Modloader/app/structs/ESNetSocketState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ESNetSocketState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
