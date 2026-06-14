#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestMessageIcon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestMessageIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestMessageIcon_DEFINED)
#include <Modloader/app/structs/QuestMessageIcon__Fields.h>
#if defined(IL2CPP_STRUCT_QuestMessageIcon__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestMessageIcon_DEFINED
struct QuestMessageIcon__Class;
struct QuestMessageIcon {
    struct QuestMessageIcon__Class* klass;
    MonitorData* monitor;
    struct QuestMessageIcon__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestMessageIcon_FWDDECL)
#define IL2CPP_STRUCT_QuestMessageIcon_FWDDECL
#include <Modloader/app/structs/QuestMessageIcon__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestMessageIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestMessageIcon_DEFINED) && !defined(IL2CPP_STRUCT_QuestMessageIcon_FWDDECL)
#include <Modloader/app/structs/QuestMessageIcon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestMessageIcon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
