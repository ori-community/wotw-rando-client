#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestsUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestsUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestsUI__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_QuestsUI__Fields_DEFINED
struct GameObject;
struct CleverMenuItemSelectionManager;
struct LegacyTransparencyAnimator;
struct Action;
struct QuestIconUI;
struct List_1_QuestItemUI_;
struct QuestDetailsUI;
struct QuestsUI__Fields {
    struct MenuScreen__Fields _;
    struct GameObject* AbilityItemHighlight;
    struct CleverMenuItemSelectionManager* NavigationManager;
    struct GameObject* QuestItemGameObject;
    struct GameObject* SideQuestItemGameObject;
    struct GameObject* QuestDetailsGameObject;
    struct Vector3 MainQuestItemBasePosition;
    struct Vector3 SideQuestItemBasePosition;
    float QuestItemRowOffset;
    struct LegacyTransparencyAnimator* FadeAnimator;
    struct Action* OnVisibilityChangedCallback;
    struct GameObject* ObjectiveAppearEffectGameObject;
    struct GameObject* ObjectiveMarkertGameObject;
    struct QuestIconUI* ActiveQuestIcon;
    struct Vector2 m_lastInput;
    struct List_1_QuestItemUI_* m_questItemsUI;
    struct QuestDetailsUI* m_questDetailsUI;
    bool m_isVisible;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestsUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestsUI__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/List_1_QuestItemUI_.h>
#include <Modloader/app/structs/QuestDetailsUI.h>
#include <Modloader/app/structs/QuestIconUI.h>
#endif
#undef IL2CPP_STRUCT_QuestsUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestsUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestsUI__Fields_FWDDECL)
#include <Modloader/app/structs/QuestsUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestsUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
