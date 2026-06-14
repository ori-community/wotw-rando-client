#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestItemUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestItemUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemUI__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Quest_QuestState__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Quest_QuestState__Enum_DEFINED)
#define IL2CPP_STRUCT_QuestItemUI__Fields_DEFINED
struct Transform;
struct RuntimeQuest;
struct MessageBox;
struct GameObject;
struct QuestItemUI__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* QuestIconPos;
    struct RuntimeQuest* RuntimeQuest;
    struct MessageBox* QuestNameMessageBox;
    struct GameObject* Tracked;
    struct GameObject* New;
    struct GameObject* Icon;
    struct Color SelectedItemColor;
    bool ChangeColorWhenSelected;
    Quest_QuestState__Enum m_previousState;

    struct RuntimeQuest* m_previousQuest;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestItemUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestItemUI__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/RuntimeQuest.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_QuestItemUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestItemUI__Fields_FWDDECL)
#include <Modloader/app/structs/QuestItemUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestItemUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
