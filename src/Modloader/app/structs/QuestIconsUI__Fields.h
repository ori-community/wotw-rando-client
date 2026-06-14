#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestIconsUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestIconsUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestIconsUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/QuestIconMode__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_QuestIconMode__Enum_DEFINED)
#define IL2CPP_STRUCT_QuestIconsUI__Fields_DEFINED
struct List_1_QuestIconUI_;
struct GameObject;
struct LegacyTransparencyAnimator;
struct Action;
struct QuestIconUI;
struct Dictionary_2_RuntimeQuest_QuestIconUI_;
struct QuestIconsUI__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_QuestIconUI_* QuestIcons;
    struct GameObject* QuestIconUIPrefab;
    struct LegacyTransparencyAnimator* FadeAnimator;
    struct Action* OnVisibilityChangedCallback;
    struct GameObject* ObjectiveAppearEffectGameObject;
    struct GameObject* ObjectiveMarkerGameObject;
    struct GameObject* ObjectiveArrow;
    float m_questIconZAxisValue;
    struct GameObject* m_objectiveMarker;
    float m_objectiveMarkerScale;
    struct QuestIconUI* ObjectiveQuestIcon;
    QuestIconMode__Enum AreaMapIconMode;

    struct Dictionary_2_RuntimeQuest_QuestIconUI_* QuestToIconMap;
    bool m_isVisible;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestIconsUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestIconsUI__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Dictionary_2_RuntimeQuest_QuestIconUI_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/List_1_QuestIconUI_.h>
#include <Modloader/app/structs/QuestIconUI.h>
#endif
#undef IL2CPP_STRUCT_QuestIconsUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestIconsUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestIconsUI__Fields_FWDDECL)
#include <Modloader/app/structs/QuestIconsUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestIconsUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
