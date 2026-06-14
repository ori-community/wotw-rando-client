#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_gameserveritem_t__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_gameserveritem_t__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_gameserveritem_t__Fields_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#include <Modloader/app/structs/servernetadr_t.h>
#if defined(IL2CPP_STRUCT_servernetadr_t_DEFINED) && defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_gameserveritem_t__Fields_DEFINED
struct Byte__Array;
struct __declspec(align(8)) gameserveritem_t__Fields {
    struct servernetadr_t m_NetAdr;
    int32_t m_nPing;
    bool m_bHadSuccessfulResponse;
    bool m_bDoNotRefresh;
    struct Byte__Array* m_szGameDir;
    struct Byte__Array* m_szMap;
    struct Byte__Array* m_szGameDescription;
    uint32_t m_nAppID;
    int32_t m_nPlayers;
    int32_t m_nMaxPlayers;
    int32_t m_nBotPlayers;
    bool m_bPassword;
    bool m_bSecure;
    uint32_t m_ulTimeLastPlayed;
    int32_t m_nServerVersion;
    struct Byte__Array* m_szServerName;
    struct Byte__Array* m_szGameTags;
    struct CSteamID m_steamID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_gameserveritem_t__Fields_FWDDECL)
#define IL2CPP_STRUCT_gameserveritem_t__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_gameserveritem_t__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_gameserveritem_t__Fields_DEFINED) && !defined(IL2CPP_STRUCT_gameserveritem_t__Fields_FWDDECL)
#include <Modloader/app/structs/gameserveritem_t__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/gameserveritem_t__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
