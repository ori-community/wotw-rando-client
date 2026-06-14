#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EChatRoomEnterResponse__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EChatRoomEnterResponse__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EChatRoomEnterResponse__Enum_DEFINED)
#define IL2CPP_STRUCT_EChatRoomEnterResponse__Enum_DEFINED
enum class EChatRoomEnterResponse__Enum : int32_t {
    k_EChatRoomEnterResponseSuccess = 0x00000001,
    k_EChatRoomEnterResponseDoesntExist = 0x00000002,
    k_EChatRoomEnterResponseNotAllowed = 0x00000003,
    k_EChatRoomEnterResponseFull = 0x00000004,
    k_EChatRoomEnterResponseError = 0x00000005,
    k_EChatRoomEnterResponseBanned = 0x00000006,
    k_EChatRoomEnterResponseLimited = 0x00000007,
    k_EChatRoomEnterResponseClanDisabled = 0x00000008,
    k_EChatRoomEnterResponseCommunityBan = 0x00000009,
    k_EChatRoomEnterResponseMemberBlockedYou = 0x0000000a,
    k_EChatRoomEnterResponseYouBlockedMember = 0x0000000b,
    k_EChatRoomEnterResponseRatelimitExceeded = 0x0000000f,
};
#endif
#if !defined(IL2CPP_STRUCT_EChatRoomEnterResponse__Enum_FWDDECL)
#define IL2CPP_STRUCT_EChatRoomEnterResponse__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EChatRoomEnterResponse__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EChatRoomEnterResponse__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EChatRoomEnterResponse__Enum_FWDDECL)
#include <Modloader/app/structs/EChatRoomEnterResponse__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EChatRoomEnterResponse__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
