#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestDetailsUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestDetailsUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestDetailsUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestDetailsUI__Fields_DEFINED
struct MessageBox;
struct GameObject;
struct Renderer;
struct QuestDetailsUI__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBox* QuestNameMessageBox;
    struct MessageBox* QuestDescriptionMessageBox;
    struct GameObject* QuestObjectiveHeader;
    struct MessageBox* QuestObjectiveMessageBox;
    struct GameObject* QuestRewardHeader;
    struct MessageBox* QuestRewardMessageBox;
    struct Renderer* IconRenderer;
    struct GameObject* SpiritLight;
    struct GameObject* Ore;
    struct GameObject* Keystone;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestDetailsUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestDetailsUI__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_QuestDetailsUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestDetailsUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestDetailsUI__Fields_FWDDECL)
#include <Modloader/app/structs/QuestDetailsUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestDetailsUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
