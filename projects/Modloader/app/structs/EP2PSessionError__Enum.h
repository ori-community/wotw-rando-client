#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EP2PSessionError__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EP2PSessionError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EP2PSessionError__Enum_DEFINED)
#define IL2CPP_STRUCT_EP2PSessionError__Enum_DEFINED
enum class EP2PSessionError__Enum : int32_t {
    k_EP2PSessionErrorNone = 0x00000000,
    k_EP2PSessionErrorNotRunningApp = 0x00000001,
    k_EP2PSessionErrorNoRightsToApp = 0x00000002,
    k_EP2PSessionErrorDestinationNotLoggedIn = 0x00000003,
    k_EP2PSessionErrorTimeout = 0x00000004,
    k_EP2PSessionErrorMax = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_EP2PSessionError__Enum_FWDDECL)
#define IL2CPP_STRUCT_EP2PSessionError__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EP2PSessionError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EP2PSessionError__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EP2PSessionError__Enum_FWDDECL)
#include <Modloader/app/structs/EP2PSessionError__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EP2PSessionError__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
