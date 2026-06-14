#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XblAchievement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XblAchievement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievement__Fields_DEFINED)
#include <Modloader/app/structs/XblAchievementParticipationType__Enum.h>
#include <Modloader/app/structs/XblAchievementProgressState__Enum.h>
#include <Modloader/app/structs/XblAchievementType__Enum.h>
#if defined(IL2CPP_STRUCT_XblAchievementProgressState__Enum_DEFINED) && defined(IL2CPP_STRUCT_XblAchievementType__Enum_DEFINED) && defined(IL2CPP_STRUCT_XblAchievementParticipationType__Enum_DEFINED)
#define IL2CPP_STRUCT_XblAchievement__Fields_DEFINED
struct String;
struct XblAchievementTitleAssociation__Array;
struct XblAchievementProgression;
struct XblAchievementMediaAsset__Array;
struct String__Array;
struct XblAchievementTimeWindow;
struct XblAchievementReward__Array;
struct __declspec(align(8)) XblAchievement__Fields {
    struct String* _Id_k__BackingField;
    struct String* _ServiceConfigurationId_k__BackingField;
    struct String* _Name_k__BackingField;
    struct XblAchievementTitleAssociation__Array* _TitleAssociations_k__BackingField;
    XblAchievementProgressState__Enum _ProgressState_k__BackingField;

    struct XblAchievementProgression* _Progression_k__BackingField;
    struct XblAchievementMediaAsset__Array* _MediaAssets_k__BackingField;
    struct String__Array* _PlatformsAvailableOn_k__BackingField;
    bool _IsSecret_k__BackingField;
    struct String* _UnlockedDescription_k__BackingField;
    struct String* _LockedDescription_k__BackingField;
    struct String* _ProductId_k__BackingField;
    XblAchievementType__Enum _Type_k__BackingField;

    XblAchievementParticipationType__Enum _ParticipationType_k__BackingField;

    struct XblAchievementTimeWindow* _Available_k__BackingField;
    struct XblAchievementReward__Array* _Rewards_k__BackingField;
    uint64_t _EstimatedUnlockTime_k__BackingField;
    struct String* _DeepLink_k__BackingField;
    bool _IsRevoked_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XblAchievement__Fields_FWDDECL)
#define IL2CPP_STRUCT_XblAchievement__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/XblAchievementMediaAsset__Array.h>
#include <Modloader/app/structs/XblAchievementProgression.h>
#include <Modloader/app/structs/XblAchievementReward__Array.h>
#include <Modloader/app/structs/XblAchievementTimeWindow.h>
#include <Modloader/app/structs/XblAchievementTitleAssociation__Array.h>
#endif
#undef IL2CPP_STRUCT_XblAchievement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XblAchievement__Fields_FWDDECL)
#include <Modloader/app/structs/XblAchievement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XblAchievement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
