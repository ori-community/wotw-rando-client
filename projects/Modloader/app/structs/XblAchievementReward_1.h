#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XblAchievementReward_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XblAchievementReward_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementReward_1_DEFINED)
#include <Modloader/app/structs/UTF8StringPtr.h>
#include <Modloader/app/structs/XblAchievementRewardType__Enum.h>
#if defined(IL2CPP_STRUCT_UTF8StringPtr_DEFINED) && defined(IL2CPP_STRUCT_XblAchievementRewardType__Enum_DEFINED)
#define IL2CPP_STRUCT_XblAchievementReward_1_DEFINED
struct XblAchievementReward_1 {
    struct UTF8StringPtr name;
    struct UTF8StringPtr description;
    struct UTF8StringPtr value;
    XblAchievementRewardType__Enum rewardType;

    struct UTF8StringPtr valueType;
    void* mediaAsset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XblAchievementReward_1_FWDDECL)
#define IL2CPP_STRUCT_XblAchievementReward_1_FWDDECL
#endif
#undef IL2CPP_STRUCT_XblAchievementReward_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementReward_1_DEFINED) && !defined(IL2CPP_STRUCT_XblAchievementReward_1_FWDDECL)
#include <Modloader/app/structs/XblAchievementReward_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XblAchievementReward_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
