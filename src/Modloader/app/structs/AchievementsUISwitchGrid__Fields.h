#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AchievementsUISwitchGrid__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AchievementsUISwitchGrid__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsUISwitchGrid__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AchievementsUISwitchGrid__Fields_DEFINED
struct AchievementsUIItem;
struct CleverMenuItemSelectionManager;
struct String;
struct List_1_AchievementAsset_;
struct AchievementsUISwitchGrid__Fields {
    struct MonoBehaviour__Fields _;
    struct AchievementsUIItem* AchievementsUIItemTemplate;
    struct CleverMenuItemSelectionManager* SelectionManager;
    struct String* StoryAchievementAssets;
    struct String* GameAchievementAssets;
    struct String* FunAchievementAssets;
    float SpaceX;
    float SpaceY;
    struct List_1_AchievementAsset_* AchievementAssets;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AchievementsUISwitchGrid__Fields_FWDDECL)
#define IL2CPP_STRUCT_AchievementsUISwitchGrid__Fields_FWDDECL
#include <Modloader/app/structs/AchievementsUIItem.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/List_1_AchievementAsset_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AchievementsUISwitchGrid__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AchievementsUISwitchGrid__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AchievementsUISwitchGrid__Fields_FWDDECL)
#include <Modloader/app/structs/AchievementsUISwitchGrid__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AchievementsUISwitchGrid__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
