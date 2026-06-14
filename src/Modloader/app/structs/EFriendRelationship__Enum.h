#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EFriendRelationship__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EFriendRelationship__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EFriendRelationship__Enum_DEFINED)
#define IL2CPP_STRUCT_EFriendRelationship__Enum_DEFINED
enum class EFriendRelationship__Enum : int32_t {
    k_EFriendRelationshipNone = 0x00000000,
    k_EFriendRelationshipBlocked = 0x00000001,
    k_EFriendRelationshipRequestRecipient = 0x00000002,
    k_EFriendRelationshipFriend = 0x00000003,
    k_EFriendRelationshipRequestInitiator = 0x00000004,
    k_EFriendRelationshipIgnored = 0x00000005,
    k_EFriendRelationshipIgnoredFriend = 0x00000006,
    k_EFriendRelationshipSuggested_DEPRECATED = 0x00000007,
    k_EFriendRelationshipMax = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_EFriendRelationship__Enum_FWDDECL)
#define IL2CPP_STRUCT_EFriendRelationship__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EFriendRelationship__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EFriendRelationship__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EFriendRelationship__Enum_FWDDECL)
#include <Modloader/app/structs/EFriendRelationship__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EFriendRelationship__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
