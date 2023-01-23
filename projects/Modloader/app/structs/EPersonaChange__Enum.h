#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EPersonaChange__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EPersonaChange__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EPersonaChange__Enum_DEFINED)
#define IL2CPP_STRUCT_EPersonaChange__Enum_DEFINED
enum class EPersonaChange__Enum : int32_t {
    k_EPersonaChangeName = 0x00000001,
    k_EPersonaChangeStatus = 0x00000002,
    k_EPersonaChangeComeOnline = 0x00000004,
    k_EPersonaChangeGoneOffline = 0x00000008,
    k_EPersonaChangeGamePlayed = 0x00000010,
    k_EPersonaChangeGameServer = 0x00000020,
    k_EPersonaChangeAvatar = 0x00000040,
    k_EPersonaChangeJoinedSource = 0x00000080,
    k_EPersonaChangeLeftSource = 0x00000100,
    k_EPersonaChangeRelationshipChanged = 0x00000200,
    k_EPersonaChangeNameFirstSet = 0x00000400,
    k_EPersonaChangeBroadcast = 0x00000800,
    k_EPersonaChangeNickname = 0x00001000,
    k_EPersonaChangeSteamLevel = 0x00002000,
    k_EPersonaChangeRichPresence = 0x00004000,
};
#endif
#if !defined(IL2CPP_STRUCT_EPersonaChange__Enum_FWDDECL)
#define IL2CPP_STRUCT_EPersonaChange__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EPersonaChange__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EPersonaChange__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EPersonaChange__Enum_FWDDECL)
#include <Modloader/app/structs/EPersonaChange__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EPersonaChange__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
