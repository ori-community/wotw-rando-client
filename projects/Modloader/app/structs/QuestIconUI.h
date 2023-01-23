#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestIconUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestIconUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestIconUI_DEFINED)
#include <Modloader/app/structs/QuestIconUI__Fields.h>
#if defined(IL2CPP_STRUCT_QuestIconUI__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestIconUI_DEFINED
struct QuestIconUI__Class;
struct QuestIconUI {
    struct QuestIconUI__Class* klass;
    MonitorData* monitor;
    struct QuestIconUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestIconUI_FWDDECL)
#define IL2CPP_STRUCT_QuestIconUI_FWDDECL
#include <Modloader/app/structs/QuestIconUI__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestIconUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestIconUI_DEFINED) && !defined(IL2CPP_STRUCT_QuestIconUI_FWDDECL)
#include <Modloader/app/structs/QuestIconUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestIconUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
