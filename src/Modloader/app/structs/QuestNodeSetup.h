#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestNodeSetup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestNodeSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestNodeSetup_DEFINED)
#include <Modloader/app/structs/QuestNodeSetup__Fields.h>
#if defined(IL2CPP_STRUCT_QuestNodeSetup__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestNodeSetup_DEFINED
struct QuestNodeSetup__Class;
struct QuestNodeSetup {
    struct QuestNodeSetup__Class* klass;
    MonitorData* monitor;
    struct QuestNodeSetup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestNodeSetup_FWDDECL)
#define IL2CPP_STRUCT_QuestNodeSetup_FWDDECL
#include <Modloader/app/structs/QuestNodeSetup__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestNodeSetup_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestNodeSetup_DEFINED) && !defined(IL2CPP_STRUCT_QuestNodeSetup_FWDDECL)
#include <Modloader/app/structs/QuestNodeSetup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestNodeSetup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
