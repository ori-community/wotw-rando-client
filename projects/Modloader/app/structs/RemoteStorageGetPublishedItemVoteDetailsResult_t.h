#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteStorageGetPublishedItemVoteDetailsResult_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteStorageGetPublishedItemVoteDetailsResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteStorageGetPublishedItemVoteDetailsResult_t_DEFINED)
#include <Modloader/app/structs/EResult__Enum.h>
#include <Modloader/app/structs/PublishedFileId_t.h>
#if defined(IL2CPP_STRUCT_EResult__Enum_DEFINED) && defined(IL2CPP_STRUCT_PublishedFileId_t_DEFINED)
#define IL2CPP_STRUCT_RemoteStorageGetPublishedItemVoteDetailsResult_t_DEFINED
struct RemoteStorageGetPublishedItemVoteDetailsResult_t {
    EResult__Enum m_eResult;

    struct PublishedFileId_t m_unPublishedFileId;
    int32_t m_nVotesFor;
    int32_t m_nVotesAgainst;
    int32_t m_nReports;
    float m_fScore;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoteStorageGetPublishedItemVoteDetailsResult_t_FWDDECL)
#define IL2CPP_STRUCT_RemoteStorageGetPublishedItemVoteDetailsResult_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_RemoteStorageGetPublishedItemVoteDetailsResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteStorageGetPublishedItemVoteDetailsResult_t_DEFINED) && !defined(IL2CPP_STRUCT_RemoteStorageGetPublishedItemVoteDetailsResult_t_FWDDECL)
#include <Modloader/app/structs/RemoteStorageGetPublishedItemVoteDetailsResult_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteStorageGetPublishedItemVoteDetailsResult_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
