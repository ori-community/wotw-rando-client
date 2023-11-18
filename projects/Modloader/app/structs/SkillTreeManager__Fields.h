#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkillTreeManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkillTreeManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillTreeManager__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_SkillTreeManager__Fields_DEFINED
struct CleverMenuItemSelectionManager;
struct SkillItem;
struct Transform;
struct SoundProvider;
struct GameObject;
struct Renderer;
struct MessageBox;
struct SkillTreeLaneLogic;
struct LegacyAnimator;
struct ActionMethod;
struct MessageProvider;
struct AchievementAsset;
struct List_1_SkillTreeManager_AbilityMessageProvider_;
struct SkillTreeManager__Fields {
    struct MenuScreen__Fields _;
    struct CleverMenuItemSelectionManager* NavigationManager;
    struct SkillItem* CurrentSkillItem;
    struct Transform* Cursor;
    struct SoundProvider* OpenSound;
    struct SoundProvider* CloseSound;
    struct GameObject* LargeIcon;
    struct Renderer* LargeIconGlow;
    struct MessageBox* RequirementsLineA;
    struct MessageBox* AbilityTitle;
    struct MessageBox* AbilityDescription;
    struct GameObject* InfoPanel;
    struct MessageBox* AbilityDiskInfoPanelDescription;
    struct GameObject* AbilityDiskInfoPanel;
    struct SkillTreeLaneLogic* EnergyLane;
    struct SkillTreeLaneLogic* UtilityLane;
    struct SkillTreeLaneLogic* CombatLane;
    struct GameObject* GainSkillEffect;
    struct LegacyAnimator* RequirementsLineAShake;
    struct ActionMethod* OnGainAbility;
    struct ActionMethod* OnAlreadyEarnedAbility;
    struct ActionMethod* OnCantEarnSkill;
    struct MessageProvider* AbilityPointMessageProvider;
    struct MessageProvider* AbilityPointsMessageProvider;
    struct MessageProvider* RequiresMessageProvider;
    struct MessageProvider* AbilityMasteredMessageProvider;
    struct AchievementAsset* SpentFirstSkillPointAchievement;
    struct List_1_SkillTreeManager_AbilityMessageProvider_* AbilityMessages;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkillTreeManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkillTreeManager__Fields_FWDDECL
#include <Modloader/app/structs/AchievementAsset.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyAnimator.h>
#include <Modloader/app/structs/List_1_SkillTreeManager_AbilityMessageProvider_.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SkillItem.h>
#include <Modloader/app/structs/SkillTreeLaneLogic.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SkillTreeManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkillTreeManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkillTreeManager__Fields_FWDDECL)
#include <Modloader/app/structs/SkillTreeManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkillTreeManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
