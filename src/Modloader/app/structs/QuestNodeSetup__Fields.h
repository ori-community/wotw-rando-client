#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestNodeSetup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestNodeSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestNodeSetup__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestNodeSetup__Fields_DEFINED
struct List_1_QuestNodeSetup_QuestInteractionSetup_;
struct QuestNodeSetup__Fields {
    struct ScriptableObject__Fields _;
    struct List_1_QuestNodeSetup_QuestInteractionSetup_* QuestInteractionSets;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestNodeSetup__Fields_FWDDECL)
#define IL2CPP_STRUCT_QuestNodeSetup__Fields_FWDDECL
#include <Modloader/app/structs/List_1_QuestNodeSetup_QuestInteractionSetup_.h>
#endif
#undef IL2CPP_STRUCT_QuestNodeSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestNodeSetup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QuestNodeSetup__Fields_FWDDECL)
#include <Modloader/app/structs/QuestNodeSetup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestNodeSetup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
