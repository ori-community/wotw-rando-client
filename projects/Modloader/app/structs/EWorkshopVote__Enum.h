#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EWorkshopVote__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EWorkshopVote__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EWorkshopVote__Enum_DEFINED)
#define IL2CPP_STRUCT_EWorkshopVote__Enum_DEFINED
enum class EWorkshopVote__Enum : int32_t {
    k_EWorkshopVoteUnvoted = 0x00000000,
    k_EWorkshopVoteFor = 0x00000001,
    k_EWorkshopVoteAgainst = 0x00000002,
    k_EWorkshopVoteLater = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_EWorkshopVote__Enum_FWDDECL)
#define IL2CPP_STRUCT_EWorkshopVote__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EWorkshopVote__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EWorkshopVote__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EWorkshopVote__Enum_FWDDECL)
#include <Modloader/app/structs/EWorkshopVote__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EWorkshopVote__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
