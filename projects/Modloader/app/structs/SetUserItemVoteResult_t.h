#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetUserItemVoteResult_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetUserItemVoteResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetUserItemVoteResult_t_DEFINED)
#include <Modloader/app/structs/EResult__Enum.h>
#include <Modloader/app/structs/PublishedFileId_t.h>
#if defined(IL2CPP_STRUCT_PublishedFileId_t_DEFINED) && defined(IL2CPP_STRUCT_EResult__Enum_DEFINED)
#define IL2CPP_STRUCT_SetUserItemVoteResult_t_DEFINED
struct SetUserItemVoteResult_t {
    struct PublishedFileId_t m_nPublishedFileId;
    EResult__Enum m_eResult;

    bool m_bVoteUp;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetUserItemVoteResult_t_FWDDECL)
#define IL2CPP_STRUCT_SetUserItemVoteResult_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_SetUserItemVoteResult_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetUserItemVoteResult_t_DEFINED) && !defined(IL2CPP_STRUCT_SetUserItemVoteResult_t_FWDDECL)
#include <Modloader/app/structs/SetUserItemVoteResult_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetUserItemVoteResult_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
