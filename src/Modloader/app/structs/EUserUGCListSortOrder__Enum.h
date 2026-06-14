#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EUserUGCListSortOrder__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EUserUGCListSortOrder__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EUserUGCListSortOrder__Enum_DEFINED)
#define IL2CPP_STRUCT_EUserUGCListSortOrder__Enum_DEFINED
enum class EUserUGCListSortOrder__Enum : int32_t {
    k_EUserUGCListSortOrder_CreationOrderDesc = 0x00000000,
    k_EUserUGCListSortOrder_CreationOrderAsc = 0x00000001,
    k_EUserUGCListSortOrder_TitleAsc = 0x00000002,
    k_EUserUGCListSortOrder_LastUpdatedDesc = 0x00000003,
    k_EUserUGCListSortOrder_SubscriptionDateDesc = 0x00000004,
    k_EUserUGCListSortOrder_VoteScoreDesc = 0x00000005,
    k_EUserUGCListSortOrder_ForModeration = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_EUserUGCListSortOrder__Enum_FWDDECL)
#define IL2CPP_STRUCT_EUserUGCListSortOrder__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EUserUGCListSortOrder__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EUserUGCListSortOrder__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EUserUGCListSortOrder__Enum_FWDDECL)
#include <Modloader/app/structs/EUserUGCListSortOrder__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EUserUGCListSortOrder__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
