#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestDetailsUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestDetailsUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestDetailsUI_DEFINED)
#include <Modloader/app/structs/QuestDetailsUI__Fields.h>
#if defined(IL2CPP_STRUCT_QuestDetailsUI__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestDetailsUI_DEFINED
struct QuestDetailsUI__Class;
struct QuestDetailsUI {
    struct QuestDetailsUI__Class* klass;
    MonitorData* monitor;
    struct QuestDetailsUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestDetailsUI_FWDDECL)
#define IL2CPP_STRUCT_QuestDetailsUI_FWDDECL
#include <Modloader/app/structs/QuestDetailsUI__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestDetailsUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestDetailsUI_DEFINED) && !defined(IL2CPP_STRUCT_QuestDetailsUI_FWDDECL)
#include <Modloader/app/structs/QuestDetailsUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestDetailsUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
