#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotBackupUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotBackupUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackupUI_DEFINED)
#include <Modloader/app/structs/SaveSlotBackupUI__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSlotBackupUI__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveSlotBackupUI_DEFINED
struct SaveSlotBackupUI__Class;
struct SaveSlotBackupUI {
    struct SaveSlotBackupUI__Class* klass;
    MonitorData* monitor;
    struct SaveSlotBackupUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotBackupUI_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotBackupUI_FWDDECL
#include <Modloader/app/structs/SaveSlotBackupUI__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotBackupUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackupUI_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotBackupUI_FWDDECL)
#include <Modloader/app/structs/SaveSlotBackupUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotBackupUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
