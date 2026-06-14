#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FriendsEnumerateFollowingList_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FriendsEnumerateFollowingList_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendsEnumerateFollowingList_t_DEFINED)
#include <Modloader/app/structs/EResult__Enum.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED)
#define IL2CPP_STRUCT_FriendsEnumerateFollowingList_t_DEFINED
struct CSteamID__Array;
struct FriendsEnumerateFollowingList_t {
    EResult__Enum m_eResult;

    struct CSteamID__Array* m_rgSteamID;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FriendsEnumerateFollowingList_t_FWDDECL)
#define IL2CPP_STRUCT_FriendsEnumerateFollowingList_t_FWDDECL
#include <Modloader/app/structs/CSteamID__Array.h>
#endif
#undef IL2CPP_STRUCT_FriendsEnumerateFollowingList_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_FriendsEnumerateFollowingList_t_DEFINED) && !defined(IL2CPP_STRUCT_FriendsEnumerateFollowingList_t_FWDDECL)
#include <Modloader/app/structs/FriendsEnumerateFollowingList_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FriendsEnumerateFollowingList_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
