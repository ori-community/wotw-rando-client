#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestItemUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestItemUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemUI_DEFINED)
#include <Modloader/app/structs/QuestItemUI__Fields.h>
#if defined(IL2CPP_STRUCT_QuestItemUI__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestItemUI_DEFINED
struct QuestItemUI__Class;
struct QuestItemUI {
    struct QuestItemUI__Class* klass;
    MonitorData* monitor;
    struct QuestItemUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestItemUI_FWDDECL)
#define IL2CPP_STRUCT_QuestItemUI_FWDDECL
#include <Modloader/app/structs/QuestItemUI__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestItemUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestItemUI_DEFINED) && !defined(IL2CPP_STRUCT_QuestItemUI_FWDDECL)
#include <Modloader/app/structs/QuestItemUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestItemUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
