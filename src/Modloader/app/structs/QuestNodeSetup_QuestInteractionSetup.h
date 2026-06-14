#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestNodeSetup_QuestInteractionSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestNodeSetup_QuestInteractionSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestNodeSetup_QuestInteractionSetup_DEFINED)
#include <Modloader/app/structs/QuestNodeSetup_QuestInteractionSetup__Fields.h>
#if defined(IL2CPP_STRUCT_QuestNodeSetup_QuestInteractionSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestNodeSetup_QuestInteractionSetup_DEFINED
struct QuestNodeSetup_QuestInteractionSetup__Class;
struct QuestNodeSetup_QuestInteractionSetup {
    struct QuestNodeSetup_QuestInteractionSetup__Class* klass;
    MonitorData* monitor;
    struct QuestNodeSetup_QuestInteractionSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestNodeSetup_QuestInteractionSetup_FWDDECL)
#define IL2CPP_STRUCT_QuestNodeSetup_QuestInteractionSetup_FWDDECL
#include <Modloader/app/structs/QuestNodeSetup_QuestInteractionSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestNodeSetup_QuestInteractionSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestNodeSetup_QuestInteractionSetup_DEFINED) && !defined(IL2CPP_STRUCT_QuestNodeSetup_QuestInteractionSetup_FWDDECL)
#include <Modloader/app/structs/QuestNodeSetup_QuestInteractionSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestNodeSetup_QuestInteractionSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
