#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveSlotBackupsManager_BackupParseQueue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveSlotBackupsManager_BackupParseQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackupsManager_BackupParseQueue_DEFINED)
#define IL2CPP_STRUCT_SaveSlotBackupsManager_BackupParseQueue_DEFINED
struct Byte__Array;
struct SaveSlotBackupsManager_BackupParseQueue {
    int32_t slotIndex;
    int32_t backupIndex;
    struct Byte__Array* rawData;
};
#endif
#if !defined(IL2CPP_STRUCT_SaveSlotBackupsManager_BackupParseQueue_FWDDECL)
#define IL2CPP_STRUCT_SaveSlotBackupsManager_BackupParseQueue_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_SaveSlotBackupsManager_BackupParseQueue_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveSlotBackupsManager_BackupParseQueue_DEFINED) && !defined(IL2CPP_STRUCT_SaveSlotBackupsManager_BackupParseQueue_FWDDECL)
#include <Modloader/app/structs/SaveSlotBackupsManager_BackupParseQueue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveSlotBackupsManager_BackupParseQueue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
