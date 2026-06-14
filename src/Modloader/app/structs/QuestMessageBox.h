#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QuestMessageBox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QuestMessageBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestMessageBox_DEFINED)
#include <Modloader/app/structs/QuestMessageBox__Fields.h>
#if defined(IL2CPP_STRUCT_QuestMessageBox__Fields_DEFINED)
#define IL2CPP_STRUCT_QuestMessageBox_DEFINED
struct QuestMessageBox__Class;
struct QuestMessageBox {
    struct QuestMessageBox__Class* klass;
    MonitorData* monitor;
    struct QuestMessageBox__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QuestMessageBox_FWDDECL)
#define IL2CPP_STRUCT_QuestMessageBox_FWDDECL
#include <Modloader/app/structs/QuestMessageBox__Class.h>
#endif
#undef IL2CPP_STRUCT_QuestMessageBox_INITIALIZING
#if !defined(IL2CPP_STRUCT_QuestMessageBox_DEFINED) && !defined(IL2CPP_STRUCT_QuestMessageBox_FWDDECL)
#include <Modloader/app/structs/QuestMessageBox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QuestMessageBox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
