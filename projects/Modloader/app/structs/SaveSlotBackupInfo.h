#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotBackupInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotBackupInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackupInfo_DEFINED)
#include <Modloader/app/structs/SaveSlotBackupInfo__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSlotBackupInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveSlotBackupInfo_DEFINED
struct SaveSlotBackupInfo__Class;
struct SaveSlotBackupInfo {
    struct SaveSlotBackupInfo__Class* klass;
    MonitorData* monitor;
    struct SaveSlotBackupInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotBackupInfo_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotBackupInfo_FWDDECL
#include <Modloader/app/structs/SaveSlotBackupInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotBackupInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackupInfo_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotBackupInfo_FWDDECL)
#include <Modloader/app/structs/SaveSlotBackupInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotBackupInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
