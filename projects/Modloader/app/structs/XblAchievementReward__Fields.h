#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XblAchievementReward__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XblAchievementReward__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementReward__Fields_DEFINED)
#include <Modloader/app/structs/XblAchievementRewardType__Enum.h>
#if defined(IL2CPP_STRUCT_XblAchievementRewardType__Enum_DEFINED)
#define IL2CPP_STRUCT_XblAchievementReward__Fields_DEFINED
struct String;
struct XblAchievementMediaAsset;
struct __declspec(align(8)) XblAchievementReward__Fields {
    struct String* _Name_k__BackingField;
    struct String* _Description_k__BackingField;
    struct String* _Value_k__BackingField;
    XblAchievementRewardType__Enum _RewardType_k__BackingField;

    struct String* _ValueType_k__BackingField;
    struct XblAchievementMediaAsset* _MediaAsset_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XblAchievementReward__Fields_FWDDECL)
#define IL2CPP_STRUCT_XblAchievementReward__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XblAchievementMediaAsset.h>
#endif
#undef IL2CPP_STRUCT_XblAchievementReward__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievementReward__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XblAchievementReward__Fields_FWDDECL)
#include <Modloader/app/structs/XblAchievementReward__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XblAchievementReward__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
