#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XblAchievement_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XblAchievement_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievement_1_DEFINED)
#include <Modloader/app/structs/SizeT.h>
#include <Modloader/app/structs/UTF8StringPtr.h>
#include <Modloader/app/structs/XblAchievementParticipationType__Enum.h>
#include <Modloader/app/structs/XblAchievementProgressState__Enum.h>
#include <Modloader/app/structs/XblAchievementProgression_1.h>
#include <Modloader/app/structs/XblAchievementTimeWindow_1.h>
#include <Modloader/app/structs/XblAchievementType__Enum.h>
#if defined(IL2CPP_STRUCT_UTF8StringPtr_DEFINED) && defined(IL2CPP_STRUCT_SizeT_DEFINED) && defined(IL2CPP_STRUCT_XblAchievementProgressState__Enum_DEFINED) && defined(IL2CPP_STRUCT_XblAchievementProgression_1_DEFINED) && defined(IL2CPP_STRUCT_XblAchievementType__Enum_DEFINED) && defined(IL2CPP_STRUCT_XblAchievementParticipationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_XblAchievementTimeWindow_1_DEFINED)
#define IL2CPP_STRUCT_XblAchievement_1_DEFINED
struct XblAchievement_1 {
    struct UTF8StringPtr id;
    struct UTF8StringPtr serviceConfigurationId;
    struct UTF8StringPtr name;
    void* titleAssociations;
    struct SizeT titleAssociationsCount;
    XblAchievementProgressState__Enum progressState;

    struct XblAchievementProgression_1 progression;
    void* mediaAssets;
    struct SizeT mediaAssetsCount;
    void* platformsAvailableOn;
    struct SizeT platformsAvailableOnCount;
    bool isSecret;
    struct UTF8StringPtr unlockedDescription;
    struct UTF8StringPtr lockedDescription;
    struct UTF8StringPtr productId;
    XblAchievementType__Enum type;

    XblAchievementParticipationType__Enum participationType;

    struct XblAchievementTimeWindow_1 available;
    void* rewards;
    struct SizeT rewardsCount;
    uint64_t estimatedUnlockTime;
    struct UTF8StringPtr deepLink;
    bool isRevoked;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XblAchievement_1_FWDDECL)
#define IL2CPP_STRUCT_XblAchievement_1_FWDDECL
#endif
#undef IL2CPP_STRUCT_XblAchievement_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievement_1_DEFINED) && !defined(IL2CPP_STRUCT_XblAchievement_1_FWDDECL)
#include <Modloader/app/structs/XblAchievement_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XblAchievement_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
