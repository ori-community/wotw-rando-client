#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestIconsUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestIconsUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestIconsUI_DEFINED)
#include <Modloader/app/structs/QuestIconsUI__Fields.h>
#if defined(IL2CPP_STRUCT_QuestIconsUI__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestIconsUI_DEFINED
struct QuestIconsUI__Class;
struct QuestIconsUI {
    struct QuestIconsUI__Class* klass;
    MonitorData* monitor;
    struct QuestIconsUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestIconsUI_FWDDECL)
#define IL2CPP_STRUCT_QuestIconsUI_FWDDECL
#include <Modloader/app/structs/QuestIconsUI__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestIconsUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestIconsUI_DEFINED) && !defined(IL2CPP_STRUCT_QuestIconsUI_FWDDECL)
#include <Modloader/app/structs/QuestIconsUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestIconsUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
