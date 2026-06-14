#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestMessageIcon__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestMessageIcon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestMessageIcon__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestMessageIcon__Fields_DEFINED
struct MeshRenderer;
struct MessageBox;
struct GameObject;
struct CompoundMessageProvider;
struct MessageProvider;
struct QuestMessageIcon__Fields {
    struct MonoBehaviour__Fields _;
    struct MeshRenderer* IconRenderer;
    struct MessageBox* SpellName;
    struct MessageBox* SubText;
    struct MessageBox* Description;
    struct GameObject* Checkmark;
    struct CompoundMessageProvider* NewQuest;
    struct CompoundMessageProvider* QuestUpdate;
    struct CompoundMessageProvider* QuestComplete;
    struct CompoundMessageProvider* NewSideQuest;
    struct CompoundMessageProvider* SideQuestUpdate;
    struct CompoundMessageProvider* SideQuestComplete;
    struct CompoundMessageProvider* NewRumor;
    struct CompoundMessageProvider* RumorUpdate;
    struct CompoundMessageProvider* RumorComplete;
    struct CompoundMessageProvider* CurrentProvider;
    struct MessageProvider* ClickToShowRumorProvider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestMessageIcon__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestMessageIcon__Fields_FWDDECL
#include <Modloader/app/structs/CompoundMessageProvider.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MeshRenderer.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_QuestMessageIcon__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestMessageIcon__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestMessageIcon__Fields_FWDDECL)
#include <Modloader/app/structs/QuestMessageIcon__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestMessageIcon__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
