#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestIconUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestIconUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestIconUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestIconUI__Fields_DEFINED
struct RuntimeQuest;
struct Renderer;
struct GameObject;
struct QuestIconUI__Fields {
    struct MonoBehaviour__Fields _;
    struct RuntimeQuest* RuntimeQuest;
    bool IsObjectiveIcon;
    bool IsWorldMapIcon;
    struct Renderer* IconRenderer;
    struct GameObject* SelectedGO;
    float _WorldMapDepth_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestIconUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestIconUI__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/RuntimeQuest.h>
#endif
#undef IL2CPP_STRUCT_QuestIconUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestIconUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestIconUI__Fields_FWDDECL)
#include <Modloader/app/structs/QuestIconUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestIconUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
