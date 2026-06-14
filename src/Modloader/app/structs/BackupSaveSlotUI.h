#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BackupSaveSlotUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BackupSaveSlotUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_BackupSaveSlotUI_DEFINED)
#include <Modloader/app/structs/BackupSaveSlotUI__Fields.h>
#if defined(IL2CPP_STRUCT_BackupSaveSlotUI__Fields_DEFINED)
#define IL2CPP_STRUCT_BackupSaveSlotUI_DEFINED
struct BackupSaveSlotUI__Class;
struct BackupSaveSlotUI {
    struct BackupSaveSlotUI__Class* klass;
    MonitorData* monitor;
    struct BackupSaveSlotUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BackupSaveSlotUI_FWDDECL)
#define IL2CPP_STRUCT_BackupSaveSlotUI_FWDDECL
#include <Modloader/app/structs/BackupSaveSlotUI__Class.h>
#endif
#undef IL2CPP_STRUCT_BackupSaveSlotUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_BackupSaveSlotUI_DEFINED) && !defined(IL2CPP_STRUCT_BackupSaveSlotUI_FWDDECL)
#include <Modloader/app/structs/BackupSaveSlotUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BackupSaveSlotUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
